#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) walk-8_pixels_71x67[] = {
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
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,
    //row: 20
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 21
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 22
    0x8932,0x8932,0x8932,0x8932,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x8932,
    //row: 23
    0x6168,0x6168,0x8932,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 24
    0x8932,0x8932,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,0xffdf,0x6168,
    //row: 25
    0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 26
    0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,
    //row: 27
    0x6ff,0xbfd,0x6ff,0x52f6,0x52f6,0x52f6,0xbfd,
    //row: 28
    0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x6ff,
    //row: 29
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,
    //row: 30
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x1060,0x1060,
    //row: 31
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x1060,
    //row: 32
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,
    //row: 33
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,
    //row: 34
    0x1060,0x1060,0x1060,0x6ff,0x6ff,0x6ff,
    //row: 35
    0x65bf,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,
    // Found row 36 at index 139
    //row: 37
    0xbfd,0x65bf,0x65bf,0x65bf,0x6ff,0x6ff,
    // Found row 38 at index 137
    // Found row 39 at index 143
    //row: 40
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x65bf,0x65bf,0x65bf,
    //row: 41
    0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x65bf,0x65bf,
    //row: 42
    0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x65bf,0x65bf,
    //row: 43
    0x52f6,0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x65bf,0x65bf,
    //row: 44
    0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x65bf,0x65bf,
    //row: 45
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x1060,0x1060,0xffdf,0x65bf,0x65bf,
    //row: 46
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x1060,0x1060,0xffdf,0xffdf,0x65bf,
    //row: 47
    0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,
    // Found row 48 at index 227
    //row: 49
    0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x52f6,0x52f6,0x52f6,0x52f6,
    //row: 50
    0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0x52f6,0x52f6,0x52f6,0x52f6,0x52f6,
    // Found row 51 at index 245
    //row: 52
    0x6168,0x6168,0x6168,0x6168,0xffdf,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 53
    0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 54
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    // Found row 55 at index 275
    //row: 56
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,
    //row: 57
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    // Found row 58 at index 295
    // Found row 59 at index 295
    //row: 60
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,
    //row: 61
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,
    //row: 62
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0x1060,
    //row: 63
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0xffdf,0xffdf,0x1060,
    //row: 64
    0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,0xd4b4,0xd4b4,
    //row: 65
    0xffff,0xffff,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,
    //row: 66
    0xffff,0xffff,0xffff,0xffff,
};

static const row_metadata_t walk-8_metadata_71x67[] = {
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
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 20,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 29,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 40,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 51,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 62,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 72,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 79,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 84,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 91,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 98,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 105,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 112,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 119,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 126,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 133,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 139,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 139,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 145,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 137,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 143,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 151,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 159,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 168,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 178,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 190,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 203,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 215,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 227,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 227,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 236,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 245,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 245,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 255,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 265,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 275,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 275,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 285,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 295,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 295,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 295,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 306,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 317,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 328,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 341,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 357,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 373,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 388,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 4
    },
};

static const image_data_t walk-8_71x67 = {
    .pixels = walk-8_pixels_71x67,
    .metadata = walk-8_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 784 bytes of pixel data (4365 pixels removed)
// 335 bytes of metadata added
// 8.5022 compression ratio
// 0.1528x original size
