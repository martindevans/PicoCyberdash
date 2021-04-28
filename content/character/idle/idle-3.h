#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) idle-3_pixels_71x67[] = {
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
    0x8932,0x8932,0x8932,0x8932,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 22
    0x6168,0x6168,0x8932,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 23
    0x8932,0x8932,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 24
    0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,0xffdf,0x52f6,0x65bf,0x65bf,
    //row: 25
    0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,0xffdf,0xbfd,0x6ff,0x52f6,0x65bf,0x65bf,
    //row: 26
    0x6ff,0xbfd,0x6ff,0x52f6,0x52f6,0x52f6,0xbfd,0x6ff,0x6ff,0x6ff,0xffdf,0x52f6,0x65bf,
    //row: 27
    0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0x65bf,0x65bf,
    //row: 28
    0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x65bf,0x65bf,0x65bf,
    //row: 29
    0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,0x6ff,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x65bf,0x65bf,0x65bf,
    //row: 30
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0xbfd,0xffdf,0x6ff,0x6ff,0x1060,0x65bf,0x65bf,0x65bf,
    //row: 31
    0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xffdf,0xffdf,0xffdf,0x1060,0x52f6,0x65bf,0x65bf,
    //row: 32
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 33
    0x1060,0x1060,0x6ff,0x6ff,0xffdf,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,
    //row: 34
    0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 35
    0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 36
    0x65bf,0x65bf,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 37
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 38
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 39
    0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 40
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x1060,
    // Found row 41 at index 278
    //row: 42
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 43
    0x6ff,0x6ff,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 44
    0x6168,0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 45
    0x52f6,0x52f6,0x52f6,0x52f6,0xffdf,0xffdf,0x52f6,0x52f6,0x52f6,0x52f6,
    //row: 46
    0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0x52f6,0x52f6,0x52f6,0x65bf,
    //row: 47
    0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0x52f6,0x52f6,0x65bf,0x65bf,
    //row: 48
    0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0x65bf,0x65bf,0x65bf,0x1060,
    // Found row 49 at index 355
    //row: 50
    0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    // Found row 51 at index 366
    // Found row 52 at index 366
    //row: 53
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 54
    0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    // Found row 55 at index 388
    //row: 56
    0x6168,0x6168,0x6168,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    //row: 57
    0x6168,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    //row: 58
    0xffff,0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,
    //row: 59
    0x1060,0x6168,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    //row: 60
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,
    //row: 61
    0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,
    //row: 62
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,
    //row: 63
    0xd4b4,0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,
    // Found row 64 at index 483
    //row: 65
    0xffff,0xffff,0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xd4b4,
    //row: 66
    0xffff,0xffff,0xffff,0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,0xd4b4,0xd4b4,
};

static const row_metadata_t idle-3_metadata_71x67[] = {
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
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 83,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 94,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 107,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 122,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 139,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 157,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 175,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 19
    },
    {
        .offset_to_first_pixel = 194,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 205,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 216,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 227,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 237,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 247,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 257,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 268,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 279,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 278,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 290,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 302,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 314,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 325,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 335,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 345,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 355,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 355,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 366,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 366,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 366,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 377,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 388,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 388,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 399,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 410,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 422,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 434,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 446,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 458,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 470,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 483,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 483,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 496,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 509,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
};

static const image_data_t idle-3_71x67 = {
    .pixels = idle-3_pixels_71x67,
    .metadata = idle-3_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 1046 bytes of pixel data (4234 pixels removed)
// 335 bytes of metadata added
// 6.8892 compression ratio
// 0.1804x original size
