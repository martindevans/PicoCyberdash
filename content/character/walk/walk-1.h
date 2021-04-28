#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) walk-1_pixels_71x67[] = {
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
    0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,0x0,0xbfd,
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
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 34
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 35
    0x1060,0x1060,0x1060,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,
    //row: 36
    0x65bf,0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 37
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 38
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,
    //row: 39
    0x65bf,0x65bf,0x0,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x52f6,
    //row: 40
    0x65bf,0x65bf,0x0,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x0,0x52f6,0x52f6,
    //row: 41
    0x65bf,0x0,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x0,0x52f6,0x52f6,
    //row: 42
    0x65bf,0x65bf,0x0,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x0,0x52f6,
    //row: 43
    0x65bf,0x65bf,0x0,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x0,0x52f6,0x52f6,
    //row: 44
    0x65bf,0x0,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x0,0x52f6,0x52f6,
    //row: 45
    0x65bf,0x65bf,0x0,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x0,0x52f6,0x52f6,
    //row: 46
    0x65bf,0x65bf,0x0,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x0,0x0,0x52f6,
    // Found row 47 at index 268
    //row: 48
    0x65bf,0x0,0x0,0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 49
    0x52f6,0x1060,0x1060,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 50
    0x52f6,0x52f6,0x52f6,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 51
    0x52f6,0x52f6,0x52f6,0x52f6,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 52
    0x1060,0x1060,0x1060,0x1060,0x0,0x6168,0x6168,0x6168,0x6168,
    //row: 53
    0x1060,0x1060,0x1060,0x1060,0x1060,0x0,0x0,0x6168,0x6168,0x6168,0x6168,
    //row: 54
    0x1060,0x1060,0x1060,0x1060,0x0,0x0,0x0,0x6168,0x6168,0x6168,0x6168,
    //row: 55
    0x1060,0x1060,0x1060,0x1060,0x0,0x0,0x0,0x0,0x6168,0x6168,0x6168,0x6168,
    //row: 56
    0x1060,0x1060,0x1060,0x1060,0x0,0x0,0x0,0x0,0x0,0x6168,0x6168,0x6168,0x6168,
    //row: 57
    0x1060,0x1060,0x1060,0x0,0x0,0x0,0x0,0x0,0x0,0x6168,0x6168,0x6168,0x6168,
    // Found row 58 at index 375
    //row: 59
    0x1060,0x1060,0x1060,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6168,0x6168,0x6168,
    //row: 60
    0x1060,0x1060,0x1060,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xffff,0xffff,0xffff,
    //row: 61
    0xd4b4,0xd4b4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6168,0x6168,
    //row: 62
    0x1060,0x1060,0x1060,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xffff,0xffff,
    //row: 63
    0xd4b4,0xd4b4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6168,0x6168,0x0,0x0,0xd4b4,
    //row: 64
    0x1060,0x1060,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xffff,0xffff,0xffff,0xffff,
    //row: 65
    0xd4b4,0xd4b4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xffff,0xffff,
    //row: 66
    0xd4b4,0xd4b4,0xd4b4,0x1060,
};

static const row_metadata_t walk-1_metadata_71x67[] = {
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
        .offset_to_first_pixel = 165,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 174,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 183,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 194,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 205,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 216,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 228,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 241,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 254,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 268,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 268,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 282,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 293,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 301,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 310,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 319,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 328,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 339,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 350,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 362,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 375,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 375,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 388,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 402,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 416,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 430,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 445,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 19
    },
    {
        .offset_to_first_pixel = 464,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 19
    },
    {
        .offset_to_first_pixel = 483,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 500,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 4
    },
};

static const image_data_t walk-1_71x67 = {
    .pixels = walk-1_pixels_71x67,
    .metadata = walk-1_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 1008 bytes of pixel data (4253 pixels removed)
// 335 bytes of metadata added
// 7.0841 compression ratio
// 0.1764x original size
