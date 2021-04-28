#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) walk-7_pixels_71x67[] = {
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
    0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,0xffdf,0xbfd,
    //row: 27
    0x6ff,0xbfd,0x6ff,0x52f6,0x52f6,0x52f6,0xbfd,0x6ff,
    //row: 28
    0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x6ff,0x6ff,
    //row: 29
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0x6ff,
    //row: 30
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x1060,0x1060,0x6ff,
    //row: 31
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x1060,0x6ff,
    //row: 32
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0xbfd,
    //row: 33
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0xbfd,
    //row: 34
    0x1060,0x1060,0x1060,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 35
    0x65bf,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,
    // Found row 36 at index 149
    //row: 37
    0xbfd,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,
    //row: 38
    0x6ff,0x65bf,0x65bf,0x65bf,0x6ff,0x6ff,
    // Found row 39 at index 154
    // Found row 40 at index 152
    //row: 41
    0x6ff,0x6ff,0x6ff,0x6ff,0x65bf,0x65bf,0x6ff,
    //row: 42
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x65bf,0x65bf,
    // Found row 43 at index 173
    //row: 44
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x52f6,0x65bf,
    //row: 45
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,0x65bf,
    //row: 46
    0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x1060,0x1060,0x65bf,
    //row: 47
    0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,
    // Found row 48 at index 209
    //row: 49
    0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x52f6,0x52f6,
    //row: 50
    0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x52f6,0x52f6,0x52f6,
    //row: 51
    0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x1060,0x1060,0x1060,
    // Found row 52 at index 208
    //row: 53
    0x6168,0x6168,0x6168,0x6168,0xffdf,0x1060,0x1060,0x1060,
    //row: 54
    0x6168,0x6168,0x6168,0x6168,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 55
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    // Found row 56 at index 256
    // Found row 57 at index 256
    // Found row 58 at index 256
    //row: 59
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,
    //row: 60
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0x1060,0x1060,
    //row: 61
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,
    //row: 62
    0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xd4b4,0x1060,
    //row: 63
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xd4b4,0x1060,
    //row: 64
    0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,
    //row: 65
    0xffff,0xffff,0xd4b4,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,
    //row: 66
    0xffff,0xffff,0xffff,0xffff,
};

static const row_metadata_t walk-7_metadata_71x67[] = {
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
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 110,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 118,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 126,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 134,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 142,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 149,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 149,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 155,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 161,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 154,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 152,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 167,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 174,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 173,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 182,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 191,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 200,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 208,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 209,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 216,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 223,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 231,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 208,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 239,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 247,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 256,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 256,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 256,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 256,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 265,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 273,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 281,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 289,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 296,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 303,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 311,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 320,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 4
    },
};

static const image_data_t walk-7_71x67 = {
    .pixels = walk-7_pixels_71x67,
    .metadata = walk-7_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 648 bytes of pixel data (4433 pixels removed)
// 335 bytes of metadata added
// 9.6785 compression ratio
// 0.1385x original size
