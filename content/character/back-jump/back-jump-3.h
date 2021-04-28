#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) back-jump-3_pixels_71x67[] = {
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
    //row: 20
    0x65bf,0x65bf,0x65bf,0x65bf,
    // Found row 21 at index 0
    //row: 22
    0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x52f6,0x52f6,
    //row: 23
    0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x52f6,0x52f6,
    //row: 24
    0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x52f6,0x52f6,0x52f6,0x52f6,
    //row: 25
    0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x52f6,0x52f6,0x52f6,
    //row: 26
    0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x52f6,0x52f6,0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 27
    0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 28
    0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 29
    0x1060,0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    0x6168,0x1060,0x1060,0x52f6,0x52f6,0x52f6,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 30
    0x1060,0x1060,0x1060,0x6ff,0xffdf,0xffdf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,
    0x6168,0x6168,0x6168,0x52f6,0x52f6,0x52f6,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 31
    0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x6168,
    0x65bf,0x65bf,0x65bf,0x52f6,0x52f6,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 32
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0xffdf,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,
    0x65bf,0x65bf,0x65bf,0x65bf,0x6168,0x52f6,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 33
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xffdf,0xffdf,0xffdf,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x6168,0x65bf,
    0x65bf,0x65bf,0x6168,0x6168,0x52f6,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 34
    0xbfd,0xbfd,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6ff,0x6ff,0x6ff,0xbfd,0x6168,0x6168,0x65bf,0x65bf,
    0x65bf,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 35
    0xbfd,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6ff,0xbfd,0xbfd,0x6168,0x6168,0x52f6,0x52f6,
    0x52f6,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,
    //row: 36
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,
    0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,
    //row: 37
    0x52f6,0x8932,0x8932,0x8932,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,
    //row: 38
    0x52f6,0x52f6,0x52f6,0x8932,0x8932,0x8932,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 39
    0x65bf,0x65bf,0x52f6,0x8932,0x8932,0xe8f8,0x8932,0x8932,0x8932,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 40
    0x8932,0x65bf,0x65bf,0x65bf,0x8932,0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    //row: 41
    0x51a6,0x51a6,0x51a6,0x51a6,0x8932,0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    //row: 42
    0x51a6,0x51a6,0x51a6,0x51a6,0x51a6,0x8932,0x8932,0xe8f8,0x8932,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    //row: 43
    0x8932,0x51a6,0x51a6,0x51a6,0x413f,0x8932,0x8932,0x8932,0x8932,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x6168,0x6168,0x6168,
    //row: 44
    0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x6168,0x6168,0x6168,
    //row: 45
    0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,0x8932,0x8932,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,0x1060,0x6168,0x6168,0x6168,
    //row: 46
    0x6168,0x6168,0x8932,0x8932,0x8932,0x8932,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,0x6168,0x6168,0x6168,
    //row: 47
    0x6168,0x6168,0x8932,0x8932,0x8932,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0x6168,0x6168,
    //row: 48
    0xd4b4,0xffff,0xffff,
    // Found row 49 at index 166
    // Found row 50 at index 707
    // Found row 51 at index 166
    // Found row 52 at index 707
    //row: 53
    0xffff,0xffff,0xffff,0xffff,
    // Found row 54 at index 707
    // Found row 55 at index 707
    // Found row 56 at index 707
    // Found row 57 at index 707
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

static const row_metadata_t back-jump-3_metadata_71x67[] = {
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
        .first_pixel_xpos = 21,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 0,
        .is_discontinuous = false,
        .first_pixel_xpos = 21,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 4,
        .is_discontinuous = true,
        .first_pixel_xpos = 21,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 16,
        .is_discontinuous = true,
        .first_pixel_xpos = 20,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 28,
        .is_discontinuous = true,
        .first_pixel_xpos = 19,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 42,
        .is_discontinuous = true,
        .first_pixel_xpos = 18,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 54,
        .is_discontinuous = true,
        .first_pixel_xpos = 18,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 70,
        .is_discontinuous = true,
        .first_pixel_xpos = 17,
        .pixel_count = 20
    },
    {
        .offset_to_first_pixel = 90,
        .is_discontinuous = true,
        .first_pixel_xpos = 16,
        .pixel_count = 21
    },
    {
        .offset_to_first_pixel = 111,
        .is_discontinuous = true,
        .first_pixel_xpos = 16,
        .pixel_count = 34
    },
    {
        .offset_to_first_pixel = 145,
        .is_discontinuous = true,
        .first_pixel_xpos = 16,
        .pixel_count = 34
    },
    {
        .offset_to_first_pixel = 179,
        .is_discontinuous = true,
        .first_pixel_xpos = 16,
        .pixel_count = 34
    },
    {
        .offset_to_first_pixel = 213,
        .is_discontinuous = true,
        .first_pixel_xpos = 16,
        .pixel_count = 34
    },
    {
        .offset_to_first_pixel = 247,
        .is_discontinuous = true,
        .first_pixel_xpos = 17,
        .pixel_count = 33
    },
    {
        .offset_to_first_pixel = 280,
        .is_discontinuous = true,
        .first_pixel_xpos = 17,
        .pixel_count = 32
    },
    {
        .offset_to_first_pixel = 312,
        .is_discontinuous = true,
        .first_pixel_xpos = 18,
        .pixel_count = 31
    },
    {
        .offset_to_first_pixel = 343,
        .is_discontinuous = true,
        .first_pixel_xpos = 19,
        .pixel_count = 29
    },
    {
        .offset_to_first_pixel = 372,
        .is_discontinuous = true,
        .first_pixel_xpos = 19,
        .pixel_count = 29
    },
    {
        .offset_to_first_pixel = 401,
        .is_discontinuous = true,
        .first_pixel_xpos = 17,
        .pixel_count = 30
    },
    {
        .offset_to_first_pixel = 431,
        .is_discontinuous = true,
        .first_pixel_xpos = 16,
        .pixel_count = 31
    },
    {
        .offset_to_first_pixel = 462,
        .is_discontinuous = true,
        .first_pixel_xpos = 15,
        .pixel_count = 31
    },
    {
        .offset_to_first_pixel = 493,
        .is_discontinuous = true,
        .first_pixel_xpos = 15,
        .pixel_count = 31
    },
    {
        .offset_to_first_pixel = 524,
        .is_discontinuous = true,
        .first_pixel_xpos = 15,
        .pixel_count = 31
    },
    {
        .offset_to_first_pixel = 555,
        .is_discontinuous = true,
        .first_pixel_xpos = 15,
        .pixel_count = 31
    },
    {
        .offset_to_first_pixel = 586,
        .is_discontinuous = true,
        .first_pixel_xpos = 15,
        .pixel_count = 31
    },
    {
        .offset_to_first_pixel = 617,
        .is_discontinuous = true,
        .first_pixel_xpos = 15,
        .pixel_count = 31
    },
    {
        .offset_to_first_pixel = 648,
        .is_discontinuous = true,
        .first_pixel_xpos = 16,
        .pixel_count = 30
    },
    {
        .offset_to_first_pixel = 678,
        .is_discontinuous = true,
        .first_pixel_xpos = 17,
        .pixel_count = 28
    },
    {
        .offset_to_first_pixel = 706,
        .is_discontinuous = false,
        .first_pixel_xpos = 42,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 166,
        .is_discontinuous = false,
        .first_pixel_xpos = 43,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 707,
        .is_discontinuous = false,
        .first_pixel_xpos = 43,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 166,
        .is_discontinuous = false,
        .first_pixel_xpos = 43,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 707,
        .is_discontinuous = false,
        .first_pixel_xpos = 43,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 709,
        .is_discontinuous = false,
        .first_pixel_xpos = 42,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 707,
        .is_discontinuous = false,
        .first_pixel_xpos = 44,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 707,
        .is_discontinuous = false,
        .first_pixel_xpos = 44,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 707,
        .is_discontinuous = false,
        .first_pixel_xpos = 45,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 707,
        .is_discontinuous = false,
        .first_pixel_xpos = 46,
        .pixel_count = 2
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

static const image_data_t back-jump-3_71x67 = {
    .pixels = back-jump-3_pixels_71x67,
    .metadata = back-jump-3_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 1426 bytes of pixel data (4044 pixels removed)
// 335 bytes of metadata added
// 5.4026 compression ratio
// 0.2203x original size
