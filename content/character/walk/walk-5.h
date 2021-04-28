#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) walk-5_pixels_71x67[] = {
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
    //row: 16
    0x8932,0x8932,0x8932,0x8932,0x8932,
    //row: 17
    0x8932,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 18
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,
    //row: 19
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 20
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 21
    0x8932,0x8932,0x8932,0x8932,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x8932,
    //row: 22
    0x6168,0x6168,0x8932,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 23
    0x8932,0x8932,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,0xffdf,0x6168,
    //row: 24
    0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 25
    0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,0xffdf,0xbfd,
    //row: 26
    0xbfd,0x6ff,0x52f6,0x52f6,0x52f6,0xbfd,0x6ff,
    //row: 27
    0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x6ff,0x6ff,
    //row: 28
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0x6ff,
    //row: 29
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,0x6ff,
    //row: 30
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x1060,0x6ff,
    //row: 31
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,
    // Found row 32 at index 125
    //row: 33
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0xbfd,
    //row: 34
    0x1060,0x1060,0x1060,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 35
    0x65bf,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,
    // Found row 36 at index 148
    // Found row 37 at index 148
    //row: 38
    0xbfd,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,
    // Found row 39 at index 153
    //row: 40
    0x6ff,0x6ff,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,
    // Found row 41 at index 152
    //row: 42
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x65bf,0x6ff,0x6ff,
    //row: 43
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x65bf,0x65bf,0x6ff,
    //row: 44
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x65bf,0x65bf,0x1060,
    //row: 45
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x65bf,0x65bf,0x1060,
    //row: 46
    0x6168,0x6168,0x6168,0x6168,0x6168,0x65bf,0x1060,
    //row: 47
    0x1060,0x6168,0x6168,0x6168,0x6168,0x65bf,0x1060,
    //row: 48
    0x1060,0x6168,0x6168,0x6168,0x6168,0x52f6,0x52f6,
    //row: 49
    0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x52f6,
    // Found row 50 at index 220
    //row: 51
    0x6168,0x6168,0x6168,0x6168,0x1060,
    // Found row 52 at index 226
    //row: 53
    0x6168,0x6168,0x6168,0x1060,0x1060,
    // Found row 54 at index 231
    // Found row 55 at index 231
    // Found row 56 at index 231
    // Found row 57 at index 231
    // Found row 58 at index 227
    // Found row 59 at index 228
    // Found row 60 at index 228
    //row: 61
    0x1060,0xffff,0xffff,0x1060,
    // Found row 62 at index 205
    //row: 63
    0xd4b4,0x1060,0xffff,0xffff,
    //row: 64
    0xd4b4,0xd4b4,0x6168,0x6168,
    //row: 65
    0xd4b4,0xffff,0xffff,0xd4b4,
    //row: 66
    0xffff,0xffff,0xffff,0xffff,
};

static const row_metadata_t walk-5_metadata_71x67[] = {
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
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 125,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 125,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 133,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 141,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 148,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 148,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 148,
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
        .offset_to_first_pixel = 153,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 160,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
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
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 175,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 183,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 191,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 199,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 206,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 7
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
        .offset_to_first_pixel = 220,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 226,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 226,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 231,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 231,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 231,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 231,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 231,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 227,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 228,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 228,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 236,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 205,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 240,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 244,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 248,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 252,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 4
    },
};

static const image_data_t walk-5_71x67 = {
    .pixels = walk-5_pixels_71x67,
    .metadata = walk-5_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 512 bytes of pixel data (4501 pixels removed)
// 335 bytes of metadata added
// 11.2326 compression ratio
// 0.1242x original size
