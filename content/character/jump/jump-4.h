#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) jump-4_pixels_71x67[] = {
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
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 19
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x6168,0x8932,
    //row: 20
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 21
    0x52f6,0xffdf,0xffdf,0x8932,0x8932,0x8932,0x8932,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 22
    0x65bf,0x65bf,0xffdf,0x6168,0x6168,0x8932,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 23
    0x65bf,0x65bf,0x52f6,0xffdf,0x8932,0x8932,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 24
    0x65bf,0x65bf,0x52f6,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 25
    0x52f6,0x52f6,0x52f6,0xffdf,0xffdf,0xffdf,0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x51a6,0x9bb0,0x9bb0,0x51a6,0x9bb0,0x9bb0,
    //row: 26
    0x65bf,0x65bf,0x52f6,0x52f6,0xffdf,0xffdf,0xffdf,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,0x9bb0,0x9bb0,0x1060,
    //row: 27
    0x65bf,0x52f6,0x1060,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,0x65bf,0x65bf,0x65bf,
    0x65bf,0x52f6,0xffdf,0x65bf,0x65bf,0x65bf,0x1060,0x52f6,0x1060,0x51a6,0x51a6,0x1060,
    //row: 28
    0x52f6,0x52f6,0x1060,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x1060,0x65bf,0x65bf,0x52f6,0x52f6,
    0x52f6,0x52f6,0x52f6,0x52f6,0x52f6,0x1060,0x1060,0x52f6,0xffdf,0x51a6,0x51a6,0x51a6,
    //row: 29
    0x1060,0x1060,0xbfd,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0xbfd,0xbfd,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    //row: 30
    0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,
    //row: 31
    0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 32
    0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0xbfd,
    // Found row 33 at index 257
    // Found row 34 at index 256
    //row: 35
    0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 36
    0xbfd,0xbfd,0x6ff,0x6ff,0x65bf,0x65bf,0x65bf,0x65bf,0xbfd,
    //row: 37
    0x6ff,0xbfd,0x6ff,0x6168,0x6168,0x6168,0x65bf,0x65bf,0x65bf,
    //row: 38
    0xbfd,0x6ff,0x6168,0x6168,0x6168,0x6168,0x65bf,0x65bf,
    //row: 39
    0x1060,0xbfd,0x6ff,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 40
    0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,
    //row: 41
    0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0xd4b4,
    //row: 42
    0x52f6,0x52f6,0x52f6,0x52f6,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0xd4b4,0xd4b4,
    //row: 43
    0x52f6,0x52f6,0x52f6,0x52f6,0x52f6,0x52f6,0x1060,0x1060,0x1060,0xffdf,0xd4b4,0xffff,0xffff,
    //row: 44
    0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xd4b4,
    //row: 45
    0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xffff,0xd4b4,
    //row: 46
    0x1060,0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xd4b4,
    // Found row 47 at index 337
    // Found row 48 at index 337
    // Found row 49 at index 337
    //row: 50
    0x1060,0x1060,0x1060,0x1060,0xd4b4,
    // Found row 51 at index 361
    // Found row 52 at index 363
    // Found row 53 at index 363
    // Found row 54 at index 363
    // Found row 55 at index 351
    // Row 56 is empty
    // Row 57 is empty
    // Row 58 is empty
    // Row 59 is empty
    // Row 60 is empty
    // Row 61 is empty
    // Row 62 is empty
    // Row 63 is empty
    // Row 64 is empty
    // Row 65 is empty
    // Row 66 is empty
};

static const row_metadata_t jump-4_metadata_71x67[] = {
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
        .first_pixel_xpos = 31,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 5,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 12,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 21,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 31,
        .is_discontinuous = false,
        .first_pixel_xpos = 28,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 42,
        .is_discontinuous = true,
        .first_pixel_xpos = 25,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 56,
        .is_discontinuous = true,
        .first_pixel_xpos = 25,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 70,
        .is_discontinuous = true,
        .first_pixel_xpos = 25,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 82,
        .is_discontinuous = true,
        .first_pixel_xpos = 25,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 94,
        .is_discontinuous = true,
        .first_pixel_xpos = 25,
        .pixel_count = 31
    },
    {
        .offset_to_first_pixel = 125,
        .is_discontinuous = true,
        .first_pixel_xpos = 23,
        .pixel_count = 34
    },
    {
        .offset_to_first_pixel = 159,
        .is_discontinuous = true,
        .first_pixel_xpos = 23,
        .pixel_count = 34
    },
    {
        .offset_to_first_pixel = 193,
        .is_discontinuous = true,
        .first_pixel_xpos = 23,
        .pixel_count = 34
    },
    {
        .offset_to_first_pixel = 227,
        .is_discontinuous = true,
        .first_pixel_xpos = 24,
        .pixel_count = 29
    },
    {
        .offset_to_first_pixel = 256,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 269,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 276,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 257,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 256,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 282,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 292,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 301,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 310,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 318,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 327,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 339,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 352,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 365,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 378,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 391,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 404,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 337,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 337,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 337,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 416,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 361,
        .is_discontinuous = false,
        .first_pixel_xpos = 36,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 363,
        .is_discontinuous = false,
        .first_pixel_xpos = 38,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 363,
        .is_discontinuous = false,
        .first_pixel_xpos = 38,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 363,
        .is_discontinuous = false,
        .first_pixel_xpos = 38,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 351,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 1
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
};

static const image_data_t jump-4_71x67 = {
    .pixels = jump-4_pixels_71x67,
    .metadata = jump-4_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 842 bytes of pixel data (4336 pixels removed)
// 335 bytes of metadata added
// 8.0833 compression ratio
// 0.1589x original size
