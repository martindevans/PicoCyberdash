from PIL import Image
from PIL import ImageColor
import argparse as ap
import numpy
import sys
import math 

def chunks(lst, n):
    """Yield successive n-sized chunks from lst."""
    for i in range(0, len(lst), n):
        yield lst[i:i + n]

def get_image(image_path):
    """Get a numpy array of an image so that one can access values[y][x]."""
    image = Image.open(image_path, "r")
    width, height = image.size
    pixel_values = list(image.getdata())
    if (image.mode == "RGB"):
        for idx, px in enumerate(pixel_values):
            pixel_values[idx] = [px[0], px[1], px[2], 255]
    elif image.mode != "RGBA":
        print("Incorrect Mode: %s" % image.mode)
        raise None
    return (list(chunks(pixel_values, width)), width, height)

def is_transparent(pixel):
    return pixel[3]<1

def find_alpha_run(data):
    length = 0
    for item in data:
        if is_transparent(item):
            length += 1
        else:
            break
    return length

def find_alpha_prelude(row):
    return find_alpha_run(row)

def find_alpha_epilogue(row):
    return find_alpha_run(reversed(row))

def find_mid_alpha(row):
    count = 0
    for item in row:
        if is_transparent(item):
            count += 1
    return count

def apply_alpha_mask(rows, alpha_mask):
    for ridx, row in enumerate(rows):
        for pidx, px in enumerate(row):
            if (px == alpha_mask):
                row[pidx] = [0,0,0,0]

def encode_pixel16(pixel):
    alpha = 1 << 5
    if pixel[3] == 0:
        alpha = 0
    color = ((pixel[0] >> 3) << 0) | ((pixel[1] >> 3) << 6) | ((pixel[2] >> 3) << 11) | alpha
    return color

def encode_pixels16(data):
    output = []
    for pixel in data:
        output.append(encode_pixel16(pixel))
    return output

def find(haystack, needle):
    """Return the index at which the sequence needle appears in the
    sequence haystack, or -1 if it is not found, using the Boyer-
    Moore-Horspool algorithm. The elements of needle and haystack must
    be hashable.

    >>> find([1, 1, 2], [1, 2])
    1

    """
    h = len(haystack)
    n = len(needle)
    skip = {needle[i]: n - i - 1 for i in range(n - 1)}
    i = n - 1
    while i < h:
        for j in range(n):
            if haystack[i - j] != needle[-j - 1]:
                i += skip.get(haystack[i], n)
                break
        else:
            return i - n + 1
    return -1

def format_pixel_data(rows, print, width, buf_width, prefix, metadata):
    alldata=[]
    pixelcount=0
    buffer=prefix
    for idx, row in enumerate(rows):
        alpha_prelude = find_alpha_prelude(row)
        alpha_epilogue = find_alpha_epilogue(row[alpha_prelude:]);
        mid_alpha = find_mid_alpha(row[alpha_prelude:-alpha_epilogue])

        # Remove prelude and epilogue from row
        del row[0:alpha_prelude]
        del row[len(row)-alpha_epilogue:]
        row = encode_pixels16(row)

        # Try to find this data i the already emitted data somewhere
        # if it's found emit no pixel data and simply point to the existing data
        found = find(alldata, row)
        if len(row) == 0 or found != -1:
            if (len(row) > 0):
                print(f"{prefix}// Found row {idx} at index {found}")
            else:
                print(f"{prefix}// Row {idx} is empty")
            metadata.append({
                "offset_to_first_pixel":max(0, found),
                "is_discontinuous":mid_alpha != 0,
                "first_pixel_num":alpha_prelude,
                "pixel_count":max(0, len(row))
            });
            continue;
        
        # Add encoded data to alldata, so that future rows might make use of it
        alldata.extend(row)

        metadata.append({
            "offset_to_first_pixel":pixelcount,
            "is_discontinuous":mid_alpha != 0,
            "first_pixel_num":alpha_prelude,
            "pixel_count":max(0, len(row))
        });

        print(f"{prefix}//row: {idx}")

        for pixel in row:
            pixelcount += 1
            buffer+=hex(pixel) + ","
            if len(buffer) >= buf_width:
                print(buffer)
                buffer=prefix
        if buffer != prefix:
            print(buffer)
            buffer=prefix
    if buffer != prefix:
        print(buffer)
    return pixelcount;

def format_metadata(metadata, print, prefix, img_width):
    for m in metadata:
        print(prefix + "{")
        offset = m["offset_to_first_pixel"]
        discon = m["is_discontinuous"]
        firstpx = m["first_pixel_num"]
        countpx = m["pixel_count"]
        print(prefix * 2 + f".offset_to_first_pixel = {offset},")
        print(prefix * 2 + f".is_discontinuous = {str(discon).lower()},")
        print(prefix * 2 + f".first_pixel_xpos = {firstpx},")
        print(prefix * 2 + f".pixel_count = {countpx}")
        print(prefix + "},")

        if firstpx + countpx > img_width:
            raise "Too wide!"

def format_c(name, rows, print):

    buf_width=140
    metadata = []

    height=len(rows)
    width=len(rows[0])

    print("#include <stdint.h>")
    print("#include \"sprite.h\"")
    print()
    print(f"static uint16_t __attribute__((aligned(2))) {name}_pixels_{width}x{height}[] = {{")
    pixel_count = format_pixel_data(rows, print, width, buf_width, "    ", metadata)
    print("};")
    print()
    print(f"static const row_metadata_t {name}_metadata_{width}x{height}[] = {{")
    format_metadata(metadata, print, "    ", width)
    print("};")
    print()
    print(f"static const image_data_t {name}_{width}x{height} = {{")
    print(f"    .pixels = {name}_pixels_{width}x{height},")
    print(f"    .metadata = {name}_metadata_{width}x{height},")
    print(f"    .size_x = {width},")
    print(f"    .size_y = {height}")
    print("};")
    print()
    print(f"// {pixel_count * 2} bytes of pixel data ({int((width * height) - pixel_count)} pixels removed)")
    print(f"// {len(metadata) * 5} bytes of metadata added")

    size_original = width * height * 2
    size_compressed = pixel_count * 2 + len(metadata) * 5
    print(f"// {size_original/size_compressed:.4f} compression ratio")
    print(f"// {(pixel_count+len(metadata) * 5)/(width * height):.4f}x original size")

output = None
def fileprint(input=""):
    output.write(input)
    output.write("\n")

import time
def main():
    parser = ap.ArgumentParser(prog="Sprite Image Encoder", description='Convert an image into 16 bit sprite data with metadata')
    parser.add_argument("input_path", help='Input file path')
    parser.add_argument("output_path", help='Output file path')
    parser.add_argument("name", help='buffer name')
    args = parser.parse_args()

    start_time = time.time()

    print(args.input_path)
    (im, width, height) = get_image(args.input_path)

    global output
    output = open(args.output_path, "w", encoding="utf-8", newline='\n')

    format_c(args.name, im, fileprint)

    end_time = time.time()
    print(f"{(end_time-start_time)*1000:.0f}ms")

if __name__ == "__main__":
    main()