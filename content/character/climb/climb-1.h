#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) climb-1_pixels_71x67[] = {
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
    //row: 10
    0x65bf,0x65bf,
    //row: 11
    0x52f6,0x65bf,0x65bf,
    //row: 12
    0x65bf,0x65bf,0x65bf,0x65bf,
    // Found row 13 at index 3
    // Found row 14 at index 2
    // Found row 15 at index 0
    //row: 16
    0x6168,0x8932,0x8932,0x52f6,0x65bf,
    //row: 17
    0x8932,0x8932,0x6168,0x8932,0x8932,0x8932,0x65bf,0x1060,0x6ff,
    //row: 18
    0x8932,0x8932,0x8932,0x6168,0x6168,0x6168,0x8932,0x8932,0x1060,0x1060,0x6ff,
    //row: 19
    0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0xbfd,0x6ff,0x6ff,
    //row: 20
    0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0xe8f8,0xe8f8,0x8932,0xbfd,0xbfd,
    //row: 21
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x8932,0xe8f8,0xe8f8,0xe8f8,0x8932,0x6ff,
    //row: 22
    0x8932,0xe8f8,0xe8f8,0xe8f8,0xe8f8,0xe8f8,0xe8f8,0xe8f8,0x8932,0x8932,0x6ff,
    //row: 23
    0x6168,0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x8932,0x8932,0x6168,0x6ff,
    //row: 24
    0x6168,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x6168,0xbfd,0x6ff,
    //row: 25
    0x6168,0x6168,0x8932,0x8932,0x8932,0x6168,0x8932,0x6168,0xbfd,0x6ff,0x6ff,
    //row: 26
    0x65bf,0x65bf,0x0,0xbfd,0x6168,0x6168,0x8932,0x6168,0x6168,0x6168,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 27
    0x65bf,0x65bf,0x65bf,0x0,0xbfd,0xbfd,0x6168,0x6168,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,
    //row: 28
    0x65bf,0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,
    //row: 29
    0x65bf,0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,
    //row: 30
    0x65bf,0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,
    //row: 31
    0x52f6,0x52f6,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,
    //row: 32
    0x52f6,0x52f6,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,
    //row: 33
    0x1060,0x1060,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,
    //row: 34
    0xbfd,0xbfd,0x6ff,0x0,0x0,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,
    //row: 35
    0xbfd,0xbfd,0x6ff,0x0,0x0,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,
    //row: 36
    0xbfd,0xbfd,0x0,0x0,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    // Found row 37 at index 163
    //row: 38
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0x1060,
    //row: 39
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0x1060,0x1060,
    //row: 40
    0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,
    // Found row 41 at index 281
    //row: 42
    0x6168,0x6168,0x6168,0x6168,0x1060,0x6168,0x6168,0x6168,0x6168,0x1060,0x52f6,0x52f6,
    //row: 43
    0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 44
    0x65bf,0x65bf,0x65bf,0x65bf,0x1060,0x0,0x0,0x0,0x0,0x1060,0x1060,0x1060,
    //row: 45
    0x65bf,0x65bf,0x65bf,0x65bf,0x0,0x0,0x0,0x0,0x0,0x1060,0x1060,0x1060,
    //row: 46
    0x65bf,0x65bf,0x65bf,0x65bf,0x0,0x0,0x0,0x0,0x1060,0x6168,0x1060,0x1060,
    //row: 47
    0x65bf,0x65bf,0x65bf,0x65bf,0x0,0x0,0x0,0x0,0x6168,0x6168,0x1060,0x1060,
    //row: 48
    0x65bf,0x52f6,0x52f6,0x52f6,0x0,0x0,0x0,0x0,0x6168,0x1060,0x1060,
    //row: 49
    0x65bf,0x6168,0x6168,0x6168,0x0,0x0,0x0,0x0,0x6168,0x1060,0x1060,
    //row: 50
    0x6168,0x6168,0x6168,0x6168,0x0,0x0,0x0,0x1060,0x1060,
    // Found row 51 at index 387
    // Found row 52 at index 387
    //row: 53
    0x6168,0x6168,0x6168,0x6168,0x0,0x0,0xffff,0xffff,0x1060,
    //row: 54
    0x6168,0x6168,0x6168,0x1060,0x0,0x0,0xffff,0xffff,0xffff,
    //row: 55
    0x1060,0x6168,0x6168,0x0,0x0,0x0,0x0,0xd4b4,0xd4b4,
    // Found row 56 at index 280
    // Found row 57 at index 26
    // Found row 58 at index 26
    // Found row 59 at index 402
    // Found row 60 at index 26
    // Found row 61 at index 402
    // Found row 62 at index 26
    // Found row 63 at index 411
    //row: 64
    0xffff,0xffff,0xffff,0xffff,
    // Row 65 is empty
    // Row 66 is empty
};

static const row_metadata_t climb-1_metadata_71x67[] = {
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
        .first_pixel_xpos = 39,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 2,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 5,
        .is_discontinuous = false,
        .first_pixel_xpos = 38,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 3,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 2,
        .is_discontinuous = false,
        .first_pixel_xpos = 40,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 41,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 9,
        .is_discontinuous = false,
        .first_pixel_xpos = 38,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 14,
        .is_discontinuous = false,
        .first_pixel_xpos = 36,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 23,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 34,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 45,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 57,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 69,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 80,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 91,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 102,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 113,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 127,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 142,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 157,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 172,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 186,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 199,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 212,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 224,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 236,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 247,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 163,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 258,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 269,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 281,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 281,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 293,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 305,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 317,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 329,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 341,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 353,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 365,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 376,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 387,
        .is_discontinuous = true,
        .first_pixel_xpos = 34,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 387,
        .is_discontinuous = true,
        .first_pixel_xpos = 34,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 387,
        .is_discontinuous = true,
        .first_pixel_xpos = 34,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 396,
        .is_discontinuous = true,
        .first_pixel_xpos = 34,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 405,
        .is_discontinuous = true,
        .first_pixel_xpos = 34,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 414,
        .is_discontinuous = true,
        .first_pixel_xpos = 34,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 280,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 26,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 26,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 402,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 26,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 402,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 26,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 411,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 423,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 4
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
};

static const image_data_t climb-1_71x67 = {
    .pixels = climb-1_pixels_71x67,
    .metadata = climb-1_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 854 bytes of pixel data (4330 pixels removed)
// 335 bytes of metadata added
// 8.0017 compression ratio
// 0.1602x original size
