#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) climb-4_pixels_71x67[] = {
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
    0x65bf,0x65bf,0x52f6,
    // Found row 12 at index 0
    // Found row 13 at index 0
    // Found row 14 at index 3
    // Found row 15 at index 0
    //row: 16
    0x65bf,0x52f6,0xffdf,0x8932,0x8932,0x6168,0x8932,0x8932,
    //row: 17
    0x6ff,0x1060,0x65bf,0xffdf,0x8932,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,0x8932,
    //row: 18
    0x6ff,0x1060,0x1060,0xffdf,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,0x8932,0x8932,
    //row: 19
    0x6ff,0x6ff,0xbfd,0xffdf,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,
    //row: 20
    0xbfd,0xbfd,0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x8932,0xe8f8,0xe8f8,0x8932,
    //row: 21
    0x6ff,0xbfd,0x8932,0xe8f8,0xe8f8,0xe8f8,0x8932,0x8932,0xe8f8,0xe8f8,0xe8f8,0x8932,
    //row: 22
    0x6ff,0xbfd,0x8932,0x8932,0xe8f8,0xe8f8,0xe8f8,0xe8f8,0xe8f8,0xe8f8,0x8932,0x6168,
    //row: 23
    0x6ff,0xbfd,0x6168,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x6168,
    //row: 24
    0x6ff,0xbfd,0x6168,0x6168,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x6168,0x6168,
    //row: 25
    0x6ff,0x6ff,0xbfd,0x6168,0x6168,0x8932,0x6168,0x8932,0x8932,0x6168,0x6168,
    //row: 26
    0xbfd,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0xbfd,0xffdf,0x65bf,0x65bf,
    //row: 27
    0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0xffdf,0x65bf,0x65bf,0x65bf,
    //row: 28
    0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0xbfd,0x65bf,0x65bf,0x65bf,
    //row: 29
    0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x65bf,0x65bf,0x65bf,
    //row: 30
    0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x65bf,
    //row: 31
    0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x52f6,0x52f6,
    //row: 32
    0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x52f6,0x52f6,
    //row: 33
    0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x1060,0x1060,
    //row: 34
    0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0xffdf,0xbfd,0xbfd,0xbfd,0xbfd,
    //row: 35
    0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xffdf,0xffdf,0xbfd,0xbfd,0xbfd,
    //row: 36
    0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xffdf,0xffdf,0xbfd,0xbfd,
    // Found row 37 at index 164
    //row: 38
    0x1060,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 39
    0x1060,0x1060,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 40
    0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,
    // Found row 41 at index 288
    //row: 42
    0x52f6,0x52f6,0x1060,0x6168,0x6168,0x6168,0x6168,0x1060,0x6168,0x6168,0x6168,0x6168,
    //row: 43
    0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,
    //row: 44
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 45
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 46
    0x1060,0x1060,0x6168,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 47
    0x1060,0x1060,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 48
    0x1060,0x1060,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0x52f6,0x52f6,0x52f6,0x65bf,
    //row: 49
    0x1060,0x1060,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x65bf,
    //row: 50
    0x1060,0x1060,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,
    // Found row 51 at index 394
    // Found row 52 at index 394
    //row: 53
    0x1060,0xffff,0xffff,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,
    //row: 54
    0xffff,0xffff,0xffff,0xffdf,0xffdf,0x1060,0x6168,0x6168,0x6168,
    //row: 55
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x1060,
    // Found row 56 at index 305
    // Found row 57 at index 20
    // Found row 58 at index 20
    // Found row 59 at index 404
    // Found row 60 at index 20
    // Found row 61 at index 404
    // Found row 62 at index 20
    // Found row 63 at index 412
    //row: 64
    0xffff,0xffff,0xffff,0xffff,
    // Row 65 is empty
    // Row 66 is empty
};

static const row_metadata_t climb-4_metadata_71x67[] = {
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
        .first_pixel_xpos = 35,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 2,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 3,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 5,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 13,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 25,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 37,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 49,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 61,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 73,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 85,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 97,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 109,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 120,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 134,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 149,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 164,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 179,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 193,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 206,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 219,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 231,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 243,
        .is_discontinuous = true,
        .first_pixel_xpos = 34,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 254,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 164,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 265,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 276,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 288,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 288,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 300,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 312,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 324,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 336,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 348,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 360,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 372,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 383,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 394,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 394,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 394,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 403,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 412,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 421,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 305,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 20,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 20,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 404,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 20,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 404,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 20,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 412,
        .is_discontinuous = false,
        .first_pixel_xpos = 38,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 430,
        .is_discontinuous = false,
        .first_pixel_xpos = 38,
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

static const image_data_t climb-4_71x67 = {
    .pixels = climb-4_pixels_71x67,
    .metadata = climb-4_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 868 bytes of pixel data (4323 pixels removed)
// 335 bytes of metadata added
// 7.9086 compression ratio
// 0.1617x original size
