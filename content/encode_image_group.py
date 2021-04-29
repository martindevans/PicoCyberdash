from PIL import Image
from PIL import ImageColor

import encode_image as ei

from pathlib import Path
import argparse as ap
import numpy as np
import sys
import math 
import os
import time
import random
import string
import glob

class ImportedImage:
    def __init__(self, name, rows, width, height):
        self.name = name
        self.rows = rows
        self.width = width
        self.height = height

class ImageMetadata:
    def __init__(self, name, width, height):
        self.rows = []
        self.name = name
        self.width = width
        self.height = height

    def add_row(self, row):
        self.rows.append(row)

class MetadataRow:
    def __init__(self, offset_to_first_pixel, first_pixel_xpos, is_discontinuous, pixel_count):
        self.rows = []
        self.offset_to_first_pixel = offset_to_first_pixel
        self.first_pixel_xpos = first_pixel_xpos
        self.is_discontinuous = is_discontinuous
        self.pixel_count = pixel_count

def resolve_globs(globs_string):
    globs = globs_string.split(",")
    result = []
    for g in globs:
        result.extend(glob.glob(g, recursive=True))
    return result

def c_imports(print):
    print("#include <stdint.h>");
    print("#include \"sprite.h\"");
    print()

def imgname(path):
    return Path(path).stem.replace("-", "_")

# Load all images in the input list
def get_images(paths, print):
    print("// ## Loaded images:")
    result = []
    for path in paths:
        (rows, width, height) = ei.get_image(path)
        img = ImportedImage(imgname(path), rows, width, height)
        print(f"// - {path} ({width * height} pixels)")
        result.append(img)
    print()
    return result

# Write out all of the pixel data for every image in the list. Aggregating metadata as we go.
def gather_metadata(images, output):
    pixels = []
    metas = []
    for image in images:
        meta = ImageMetadata(image.name, image.width, image.height)
        metas.append(meta)
        for row in image.rows:
            alpha_prelude = ei.find_alpha_prelude(row)
            alpha_epilogue = ei.find_alpha_epilogue(row[alpha_prelude:]);
            mid_alpha = ei.find_mid_alpha(row[alpha_prelude:-alpha_epilogue])

            # Remove prelude and epilogue from row
            del row[0:alpha_prelude]
            del row[len(row)-alpha_epilogue:]
            row = ei.encode_pixels16(row)

            # Try to find this data i the already emitted data somewhere
            # if it's found emit no pixel data and simply point to the existing data
            found = ei.find(pixels, row)
            if len(row) == 0 or found != -1:
                meta.add_row(MetadataRow(max(0, found), alpha_prelude, mid_alpha != 0, max(0, len(row))))
                continue;

            # Output metadata pointing to the pixels we're about to output
            meta.add_row(MetadataRow(len(pixels), alpha_prelude, mid_alpha != 0, max(0, len(row))))

            # Add encoded data to pixel blob, so that future rows might make use of it
            pixels.extend(row)

    return (metas, pixels)

def print_pixels(pixels, print, pixels_blob):
    print(f"static uint16_t __attribute__((aligned(2))) {pixels_blob}[] = {{")
    for chunk in ei.chunks(pixels, 30):
        print("    " + (",".join(map(hex, chunk))) + ",")
    print("};")

def print_metadata(metadatas, print, pixels_blob):
    for meta in metadatas:
        print(f"static const row_metadata_t {meta.name}_metadata[] = {{")
        for row in meta.rows:
            print(f"    {{")
            print(f"        .offset_to_first_pixel = {row.offset_to_first_pixel},")
            print(f"        .first_pixel_xpos = {row.first_pixel_xpos},")
            print(f"        .is_discontinuous = {str(row.is_discontinuous).lower()},")
            print(f"        .pixel_count = {row.pixel_count},")
            print(f"    }},")
        print("};")

    for meta in metadatas:
        print(f"static const image_data_t {meta.name}_{meta.width}x{meta.height} = {{")
        print(f"    .pixels = {pixels_blob},")
        print(f"    .metadata = {meta.name}_metadata,")
        print(f"    .size_x = {meta.width},")
        print(f"    .size_y = {meta.height}")
        print(f"}};")

def print_stats(images, metadatas, pixels, print):
    pixel_count = len(pixels)

    orig_pixels = 0
    for image in images:
        orig_pixels += image.width * image.height
    
    size_metadata = 0
    for meta in metadatas:
        size_metadata += len(meta.rows) * 5

    size_original = orig_pixels * 2
    size_compressed = pixel_count * 2 + size_metadata

    print("// ## Compression Stats:")
    print(f"// - {pixel_count * 2} bytes of pixel data ({size_original - size_compressed} bytes saved)")
    print(f"// - {size_metadata} bytes of metadata added")

    print(f"// - Reduced {orig_pixels} pixels to {pixel_count} pixels")
    print(f"// - {orig_pixels/size_compressed:.4f} compression ratio")
    print(f"// - {(size_compressed/size_original):.4f}x original size")

def main():
    parser = ap.ArgumentParser(prog="Sprite Image Encoder", description='Convert a group of images into a header file')
    parser.add_argument("input_globs", help='Input file globs, comma separated')
    parser.add_argument("output_path", help='Output file path', default="images.h")
    args = parser.parse_args()

    input_paths = resolve_globs(args.input_globs)

    output = open(args.output_path, "w", encoding="utf-8", newline='\n')
    fileprint = lambda input="": (output.write(input), output.write("\n"))

    random.seed(hash("".join(input_paths)))
    blob_name = "pixels_" + ''.join(random.choice(string.ascii_lowercase) for i in range(10))

    c_imports(fileprint);
    images = get_images(input_paths, fileprint)
    (metadatas, pixels) = gather_metadata(images, fileprint)
    print_stats(images, metadatas, pixels, fileprint)
    fileprint()
    print_pixels(pixels, fileprint, blob_name)
    print_metadata(metadatas, fileprint, blob_name)
    

if __name__ == "__main__":
    main()