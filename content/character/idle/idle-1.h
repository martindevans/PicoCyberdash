#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) idle-1_pixels_71x67[] = {
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
    // Row 18 is empty
    // Row 19 is empty
    // Row 20 is empty
    //row: 21
    0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,
    //row: 22
    0x8932,0x8932,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,0x8932,0x8932,
    //row: 23
    0x8932,0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x6168,0x8932,0x8932,
    //row: 24
    0x8932,0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 25
    0x8932,0xe8f8,0xe8f8,0x8932,0x51a6,0x51a6,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 26
    0x8932,0x8932,0x8932,0x51a6,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 27
    0xe8f8,0x8932,0x51a6,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 28
    0x8932,0x51a6,0x51a6,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,0x0,0x52f6,0x65bf,0x65bf,
    //row: 29
    0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,0xbfd,0x6ff,0x52f6,0x65bf,0x65bf,
    //row: 30
    0x6ff,0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,0xbfd,0x6ff,0x6ff,0x6ff,0x0,0x52f6,0x65bf,
    //row: 31
    0xbfd,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x0,0x65bf,0x65bf,
    //row: 32
    0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x65bf,0x65bf,0x65bf,
    //row: 33
    0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,0x6ff,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x65bf,0x65bf,0x65bf,
    //row: 34
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0xbfd,0x0,0x6ff,0x6ff,0x1060,0x65bf,0x65bf,0x65bf,
    //row: 35
    0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x0,0x0,0x0,0x1060,0x52f6,0x65bf,0x65bf,
    //row: 36
    0x1060,0x1060,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 37
    0x1060,0x1060,0x1060,0x1060,0x0,0x0,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,
    //row: 38
    0x65bf,0x65bf,0x65bf,0x0,0x0,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 39
    0x65bf,0x65bf,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 40
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 41
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 42
    0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 43
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x1060,0x1060,0xbfd,
    //row: 44
    0x6ff,0x6168,0x6168,0x6168,0x6ff,0x6ff,0x6ff,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 45
    0xbfd,0xbfd,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,
    // Found row 46 at index 303
    //row: 47
    0x6168,0x6168,0x6168,0x6168,0x6168,0x0,0x0,0x1060,0x1060,0x1060,0x1060,
    //row: 48
    0x52f6,0x52f6,0x65bf,0x65bf,0x0,0x0,0x52f6,0x52f6,0x52f6,0x52f6,
    //row: 49
    0x65bf,0x65bf,0x65bf,0x65bf,0x0,0x0,0x52f6,0x52f6,0x52f6,0x65bf,
    //row: 50
    0x65bf,0x65bf,0x65bf,0x65bf,0x0,0x0,0x52f6,0x52f6,0x65bf,0x65bf,
    //row: 51
    0x65bf,0x65bf,0x65bf,0x65bf,0x0,0x0,0x52f6,0x65bf,0x65bf,0x65bf,0x1060,
    //row: 52
    0x6168,0x6168,0x6168,0x6168,0x0,0x0,0x1060,0x1060,0x1060,0x1060,0x1060,
    // Found row 53 at index 367
    //row: 54
    0x6168,0x6168,0x6168,0x6168,0x6168,0x0,0x0,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 55
    0x6168,0x6168,0x6168,0x6168,0x1060,0x0,0x0,0x0,0x1060,0x1060,0x1060,0x1060,
    //row: 56
    0x6168,0x6168,0x6168,0x6168,0x0,0x0,0x0,0x0,0x1060,0x1060,0x1060,0x1060,
    //row: 57
    0x6168,0x6168,0x6168,0x6168,0x1060,0x0,0x0,0x0,0x0,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 58
    0x6168,0x6168,0x6168,0x6168,0x0,0x0,0x0,0x0,0x0,0x0,0x1060,0x1060,0x1060,0x1060,
    //row: 59
    0xd4b4,0xd4b4,0xd4b4,0x1060,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xd4b4,0xd4b4,0xd4b4,
    //row: 60
    0x1060,0x1060,0x1060,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1060,0x1060,0x1060,
    //row: 61
    0xd4b4,0xd4b4,0xd4b4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xd4b4,0xd4b4,0xd4b4,
    //row: 62
    0x1060,0x1060,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1060,0x1060,0x1060,
    // Found row 63 at index 484
    // Found row 64 at index 456
    //row: 65
    0xffff,0xffff,0xffff,0xffff,0xffff,0x0,0x0,0x0,0x0,0x0,0x0,0xffff,0xffff,0xd4b4,
    //row: 66
    0xffff,0xffff,0xffff,0xffff,0xffff,0x0,0x0,0x0,0x0,0xd4b4,0xd4b4,0xd4b4,0xd4b4,0xd4b4,
};

static const row_metadata_t idle-1_metadata_71x67[] = {
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
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 7,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 17,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 28,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 39,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 50,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 61,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 72,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 85,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 97,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 110,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 125,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 142,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 160,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 178,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 20
    },
    {
        .offset_to_first_pixel = 198,
        .is_discontinuous = false,
        .first_pixel_xpos = 28,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 211,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 222,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 233,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 243,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 253,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 264,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 276,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 289,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 302,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 303,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 315,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 326,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 336,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 346,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 356,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 367,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 367,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 378,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 390,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 402,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 414,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 428,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 442,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 456,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 470,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 484,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 484,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 456,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 498,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 512,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
};

static const image_data_t idle-1_71x67 = {
    .pixels = idle-1_pixels_71x67,
    .metadata = idle-1_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 1052 bytes of pixel data (4231 pixels removed)
// 335 bytes of metadata added
// 6.8594 compression ratio
// 0.1810x original size
