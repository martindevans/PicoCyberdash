#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) walk-3_pixels_71x67[] = {
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
    // Row 17 is empty
    //row: 18
    0x8932,0x8932,0x8932,0x8932,0x8932,
    //row: 19
    0x8932,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 20
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 21
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x6168,0x8932,
    //row: 22
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 23
    0x8932,0x8932,0x8932,0x8932,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 24
    0x6168,0x6168,0x8932,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 25
    0x8932,0x8932,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 26
    0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 27
    0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,0xffdf,0xbfd,
    //row: 28
    0x6ff,0xbfd,0x6ff,0x52f6,0x52f6,0x52f6,0xbfd,0x6ff,
    //row: 29
    0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x6ff,0x6ff,
    //row: 30
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0x6ff,
    //row: 31
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x1060,0x1060,0x6ff,
    //row: 32
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x1060,0x6ff,
    //row: 33
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    // Found row 34 at index 129
    //row: 35
    0x1060,0x1060,0x1060,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,
    //row: 36
    0x65bf,0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 37
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    // Found row 38 at index 156
    // Found row 39 at index 156
    // Found row 40 at index 156
    // Found row 41 at index 156
    //row: 42
    0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    // Found row 43 at index 165
    // Found row 44 at index 165
    //row: 45
    0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x52f6,
    //row: 46
    0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x6168,0x52f6,
    //row: 47
    0x65bf,0x65bf,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x52f6,
    //row: 48
    0x65bf,0xffdf,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 49
    0x1060,0x1060,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 50
    0x52f6,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,
    // Found row 51 at index 214
    //row: 52
    0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,
    //row: 53
    0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,
    // Found row 54 at index 232
    // Found row 55 at index 232
    //row: 56
    0x1060,0x1060,0x1060,0x1060,0xffdf,0x6168,0x6168,0x6168,
    //row: 57
    0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    //row: 58
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    //row: 59
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,
    //row: 60
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    //row: 61
    0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,
    //row: 62
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,
    //row: 63
    0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,
    //row: 64
    0xd4b4,0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,
    //row: 65
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xd4b4,
    //row: 66
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xffff,0xffff,
};

static const row_metadata_t walk-3_metadata_71x67[] = {
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
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 94,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 102,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 111,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 120,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 129,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 129,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 138,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 147,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 156,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 156,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 156,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 156,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 156,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 165,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 165,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 165,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 174,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 184,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 194,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 204,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 213,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 220,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 214,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 226,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 232,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 232,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 232,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 239,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 247,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 256,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 265,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 275,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 286,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 298,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 310,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 324,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 338,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 352,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 14
    },
};

static const image_data_t walk-3_71x67 = {
    .pixels = walk-3_pixels_71x67,
    .metadata = walk-3_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 732 bytes of pixel data (4391 pixels removed)
// 335 bytes of metadata added
// 8.9166 compression ratio
// 0.1474x original size
