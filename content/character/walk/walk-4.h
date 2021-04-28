#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) walk-4_pixels_71x67[] = {
    // Row 0 is empty
    // Row 1 is empty
    // Row 2 is empty
    // Row 3 is empty
    // Row 4 is empty
    // Row 5 is empty
    // Row 6 is empty
    // Row 7 is empty
    // Row 8 is empty
    // Row 9 is empty
    // Row 10 is empty
    // Row 11 is empty
    // Row 12 is empty
    // Row 13 is empty
    // Row 14 is empty
    // Row 15 is empty
    // Row 16 is empty
    //row: 17
    0x8932,0x8932,0x8932,0x8932,0x8932,
    //row: 18
    0x8932,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 19
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 20
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x6168,0x8932,
    //row: 21
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 22
    0x8932,0x8932,0x8932,0x8932,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 23
    0x6168,0x6168,0x8932,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 24
    0x8932,0x8932,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 25
    0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 26
    0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,0xffdf,0xbfd,
    //row: 27
    0xbfd,0x6ff,0x52f6,0x52f6,0x52f6,0xbfd,0x6ff,
    //row: 28
    0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x6ff,0x6ff,
    //row: 29
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0x6ff,
    //row: 30
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,0x6ff,
    //row: 31
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,
    //row: 32
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 33
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 34
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 35
    0x1060,0x1060,0x1060,0xbfd,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 36
    0x65bf,0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 37
    0x65bf,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    // Found row 38 at index 168
    // Found row 39 at index 169
    //row: 40
    0x6ff,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    // Found row 41 at index 176
    //row: 42
    0x6ff,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 43
    0x6ff,0x6ff,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 44
    0x6ff,0x6ff,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x1060,0x52f6,
    //row: 45
    0x6ff,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6168,0x1060,0x52f6,
    //row: 46
    0x65bf,0x65bf,0x6168,0x6168,0x6168,0x6168,0x1060,
    //row: 47
    0x65bf,0x65bf,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,
    //row: 48
    0x65bf,0x1060,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,
    //row: 49
    0x1060,0x65bf,0x65bf,0x65bf,0x65bf,0x52f6,0x52f6,
    // Found row 50 at index 243
    // Found row 51 at index 243
    // Found row 52 at index 228
    // Found row 53 at index 229
    // Found row 54 at index 229
    //row: 55
    0x1060,0x6168,0x6168,0x6168,0x1060,
    // Found row 56 at index 235
    //row: 57
    0x1060,0x1060,0x6168,0x6168,0x6168,
    // Found row 58 at index 254
    //row: 59
    0xd4b4,0xd4b4,0x1060,0x6168,0x6168,0x6168,
    //row: 60
    0x1060,0x1060,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    //row: 61
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffff,0xffff,
    //row: 62
    0x1060,0x1060,0xffdf,0xffdf,0xffdf,0x6168,0x6168,
    //row: 63
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffff,0xffff,
    //row: 64
    0xd4b4,0xd4b4,0xffdf,0xffdf,0x1060,0x1060,
    //row: 65
    0xd4b4,0xd4b4,0xffdf,0xffff,0xffff,0xd4b4,
    //row: 66
    0xffff,0xffff,0xffff,0xffff,
};

static const row_metadata_t walk-4_metadata_71x67[] = {
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 71,
        .pixel_count = 0
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 5,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 12,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 21,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 31,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 42,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 53,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 64,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 72,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 79,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 86,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 93,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 101,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 109,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 117,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 126,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 135,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 144,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 152,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 160,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 168,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 168,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 169,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 176,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 176,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 184,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 192,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 201,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 210,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 219,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 226,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 234,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 242,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 243,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 243,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 228,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 229,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 229,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 249,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 235,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 254,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 254,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 259,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 265,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 272,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 278,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 285,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 292,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 298,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 304,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 4
    },
};

static const image_data_t walk-4_71x67 = {
    .pixels = walk-4_pixels_71x67,
    .metadata = walk-4_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 616 bytes of pixel data (4449 pixels removed)
// 335 bytes of metadata added
// 10.0042 compression ratio
// 0.1352x original size
