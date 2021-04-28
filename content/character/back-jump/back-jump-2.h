#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) back-jump-2_pixels_71x67[] = {
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
    // Row 21 is empty
    // Row 22 is empty
    // Row 23 is empty
    // Row 24 is empty
    //row: 25
    0x8932,0x8932,0x8932,0x8932,0x8932,
    //row: 26
    0x8932,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 27
    0xe8f8,0xe8f8,0x6168,0x51a6,0x51a6,0x65bf,0x6168,0x8932,0x8932,
    //row: 28
    0x8932,0xe8f8,0xe8f8,0x6168,0x9bb0,0x9bb0,0x65bf,0x65bf,0x65bf,
    //row: 29
    0x8932,0xe8f8,0xe8f8,0x8932,0x51a6,0x51a6,0x65bf,0x65bf,0x65bf,0x8932,
    //row: 30
    0x8932,0x8932,0xe8f8,0xe8f8,0x8932,0x52f6,0x65bf,0x8932,0x52f6,0x52f6,0x52f6,
    //row: 31
    0x6168,0x8932,0x8932,0xe8f8,0xe8f8,0x413f,0x52f6,0x8932,0x52f6,0x6ff,0x52f6,0x52f6,0x6ff,0x6ff,0x6ff,
    //row: 32
    0x6168,0x8932,0x8932,0x8932,0x8932,0x52f6,0x52f6,0x6168,0x6ff,0xbfd,0xbfd,0x1060,0x1060,0x1060,0x6ff,
    //row: 33
    0x6168,0x8932,0x8932,0x8932,0x8932,0x6168,0x6168,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x1060,0x1060,0x6ff,
    //row: 34
    0x6168,0x6168,0x8932,0x8932,0x6168,0xffdf,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 35
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 36
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 37
    0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 38
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 39
    0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 40
    0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,
    //row: 41
    0x1060,0x1060,0x1060,0xffdf,0x1060,0x1060,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6168,0x1060,0x1060,
    //row: 42
    0x65bf,0x65bf,0xffdf,0xffdf,0x52f6,0xbfd,0xbfd,0x6ff,0x6ff,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,
    //row: 43
    0x65bf,0x65bf,0xffdf,0xffdf,0x52f6,0xbfd,0xbfd,0x6ff,0x6ff,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,
    //row: 44
    0x65bf,0x65bf,0xffdf,0xffdf,0x52f6,0xbfd,0x6ff,0x6168,0x6168,0x6168,0x6168,0x6168,0x65bf,0x65bf,0x52f6,0x52f6,0x52f6,
    //row: 45
    0x65bf,0x65bf,0xffdf,0xffdf,0x52f6,0xbfd,0xffdf,0xffdf,0x6168,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x52f6,0x52f6,0x52f6,
    //row: 46
    0x65bf,0xffdf,0xffdf,0x52f6,0xffdf,0xffdf,0xffdf,0x6168,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x52f6,0x52f6,0x52f6,0x52f6,
    //row: 47
    0x65bf,0xffdf,0x52f6,0x52f6,0xffdf,0xffdf,0xffdf,0xffdf,0x65bf,0x65bf,0x65bf,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 48
    0x65bf,0x52f6,0x52f6,0x52f6,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 49
    0x52f6,0x52f6,0x65bf,0xffdf,0x52f6,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,
    0x1060,0x1060,0x1060,
    //row: 50
    0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0xffdf,0x1060,0x1060,0x1060,
    0x1060,0x1060,0x1060,
    //row: 51
    0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0xffdf,0x1060,
    0x1060,0x1060,0x1060,0x1060,
    //row: 52
    0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    // Found row 53 at index 409
    // Found row 54 at index 329
    // Found row 55 at index 310
    // Found row 56 at index 223
    // Found row 57 at index 224
    //row: 58
    0x1060,0xffff,0xffff,
    //row: 59
    0xd4b4,0x1060,0x6168,0x6168,
    //row: 60
    0x1060,0xd4b4,0x1060,0xffff,0xffff,0x6168,
    //row: 61
    0xd4b4,0xd4b4,0x1060,0xd4b4,0xffdf,0xffdf,0x6168,0x6168,
    //row: 62
    0xd4b4,0xd4b4,0x1060,0xffdf,0xffdf,0xffdf,0x6168,0xd4b4,
    //row: 63
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xffff,
    //row: 64
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xd4b4,0xffff,0xffff,
    //row: 65
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffff,0xffff,
    // Found row 66 at index 419
};

static const row_metadata_t back-jump-2_metadata_71x67[] = {
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
        .first_pixel_xpos = 18,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 5,
        .is_discontinuous = false,
        .first_pixel_xpos = 17,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 11,
        .is_discontinuous = false,
        .first_pixel_xpos = 16,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 20,
        .is_discontinuous = false,
        .first_pixel_xpos = 15,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 29,
        .is_discontinuous = false,
        .first_pixel_xpos = 15,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 39,
        .is_discontinuous = false,
        .first_pixel_xpos = 15,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 50,
        .is_discontinuous = false,
        .first_pixel_xpos = 15,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 65,
        .is_discontinuous = false,
        .first_pixel_xpos = 15,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 80,
        .is_discontinuous = false,
        .first_pixel_xpos = 16,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 95,
        .is_discontinuous = true,
        .first_pixel_xpos = 17,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 111,
        .is_discontinuous = false,
        .first_pixel_xpos = 22,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 123,
        .is_discontinuous = false,
        .first_pixel_xpos = 22,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 136,
        .is_discontinuous = true,
        .first_pixel_xpos = 22,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 150,
        .is_discontinuous = true,
        .first_pixel_xpos = 22,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 165,
        .is_discontinuous = true,
        .first_pixel_xpos = 23,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 181,
        .is_discontinuous = true,
        .first_pixel_xpos = 24,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 197,
        .is_discontinuous = true,
        .first_pixel_xpos = 25,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 213,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 229,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 246,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 263,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 281,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 299,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 19
    },
    {
        .offset_to_first_pixel = 318,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 20
    },
    {
        .offset_to_first_pixel = 338,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 23
    },
    {
        .offset_to_first_pixel = 361,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 23
    },
    {
        .offset_to_first_pixel = 384,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 24
    },
    {
        .offset_to_first_pixel = 408,
        .is_discontinuous = true,
        .first_pixel_xpos = 40,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 409,
        .is_discontinuous = true,
        .first_pixel_xpos = 41,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 329,
        .is_discontinuous = false,
        .first_pixel_xpos = 41,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 310,
        .is_discontinuous = false,
        .first_pixel_xpos = 42,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 223,
        .is_discontinuous = false,
        .first_pixel_xpos = 42,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 224,
        .is_discontinuous = false,
        .first_pixel_xpos = 43,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 418,
        .is_discontinuous = false,
        .first_pixel_xpos = 43,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 421,
        .is_discontinuous = false,
        .first_pixel_xpos = 42,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 425,
        .is_discontinuous = false,
        .first_pixel_xpos = 41,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 431,
        .is_discontinuous = true,
        .first_pixel_xpos = 39,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 439,
        .is_discontinuous = true,
        .first_pixel_xpos = 39,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 447,
        .is_discontinuous = true,
        .first_pixel_xpos = 39,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 456,
        .is_discontinuous = true,
        .first_pixel_xpos = 40,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 464,
        .is_discontinuous = true,
        .first_pixel_xpos = 41,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 419,
        .is_discontinuous = false,
        .first_pixel_xpos = 47,
        .pixel_count = 2
    },
};

static const image_data_t back-jump-2_71x67 = {
    .pixels = back-jump-2_pixels_71x67,
    .metadata = back-jump-2_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 942 bytes of pixel data (4286 pixels removed)
// 335 bytes of metadata added
// 7.4503 compression ratio
// 0.1694x original size
