#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) walk-9_pixels_71x67[] = {
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
    0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,
    //row: 28
    0x6ff,0xbfd,0x6ff,0x52f6,0x52f6,0x52f6,0xbfd,
    //row: 29
    0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x6ff,
    //row: 30
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,
    //row: 31
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x1060,0x1060,
    //row: 32
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x1060,
    //row: 33
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,
    //row: 34
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,
    //row: 35
    0x1060,0x1060,0x1060,0x6ff,0x6ff,0x6ff,
    //row: 36
    0x65bf,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,
    // Found row 37 at index 139
    //row: 38
    0xbfd,0x65bf,0x65bf,0x6ff,0x6ff,
    // Found row 39 at index 138
    // Found row 40 at index 144
    // Found row 41 at index 142
    //row: 42
    0x6ff,0x6ff,0x6ff,0x6ff,0x65bf,0x65bf,0x6ff,
    //row: 43
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x65bf,0x65bf,
    // Found row 44 at index 156
    //row: 45
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x52f6,0x65bf,
    //row: 46
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x1060,0x1060,0x1060,0x65bf,
    //row: 47
    0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x65bf,
    //row: 48
    0x6168,0x6168,0x6168,0x6168,0x6168,0x52f6,0x52f6,0x52f6,
    // Found row 49 at index 194
    //row: 50
    0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x52f6,0x52f6,0x52f6,0x52f6,
    // Found row 51 at index 202
    //row: 52
    0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 53
    0x6168,0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 54
    0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 55
    0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 56
    0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 57
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    // Found row 58 at index 267
    //row: 59
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    //row: 60
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,
    //row: 61
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,
    //row: 62
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,
    //row: 63
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0xffdf,0xffdf,0xd4b4,
    //row: 64
    0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,0xd4b4,
    //row: 65
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,
    //row: 66
    0xffff,0xffff,0xffff,0x6168,
};

static const row_metadata_t walk-9_metadata_71x67[] = {
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
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 138,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 144,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 142,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 150,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 157,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
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
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 175,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 185,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 194,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 194,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 202,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 202,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 211,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 220,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 231,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 242,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 254,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 267,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 267,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 280,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 294,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 308,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 322,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 337,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 19
    },
    {
        .offset_to_first_pixel = 356,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 19
    },
    {
        .offset_to_first_pixel = 375,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 392,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 4
    },
};

static const image_data_t walk-9_71x67 = {
    .pixels = walk-9_pixels_71x67,
    .metadata = walk-9_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 792 bytes of pixel data (4361 pixels removed)
// 335 bytes of metadata added
// 8.4419 compression ratio
// 0.1537x original size
