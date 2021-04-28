#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) walk-16_pixels_71x67[] = {
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
    0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x1060,0x1060,0x6ff,
    //row: 31
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x1060,0xbfd,
    //row: 32
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,
    // Found row 33 at index 127
    //row: 34
    0x1060,0x1060,0x1060,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,
    //row: 35
    0x65bf,0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,
    //row: 36
    0x65bf,0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,
    //row: 37
    0x65bf,0x65bf,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,
    //row: 38
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,
    //row: 39
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0x52f6,0x52f6,
    //row: 40
    0x65bf,0x65bf,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0x52f6,0x52f6,
    //row: 41
    0x65bf,0x65bf,0xffdf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0xffdf,0x52f6,
    //row: 42
    0x65bf,0xffdf,0xffdf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0xffdf,0x52f6,0x52f6,
    //row: 43
    0x65bf,0x65bf,0xffdf,0xffdf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0xffdf,0x52f6,0x52f6,
    //row: 44
    0x65bf,0x65bf,0xffdf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0xffdf,0xffdf,0x52f6,
    //row: 45
    0x65bf,0x65bf,0xffdf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0x52f6,
    //row: 46
    0x65bf,0xffdf,0xffdf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6168,0x6168,0x6168,
    //row: 47
    0x1060,0x1060,0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,
    //row: 48
    0x1060,0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 49
    0x52f6,0x52f6,0x52f6,0x1060,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 50
    0x52f6,0x52f6,0x52f6,0x52f6,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 51
    0x52f6,0x52f6,0x52f6,0x52f6,0xffdf,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 52
    0x1060,0x1060,0x1060,0x1060,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 53
    0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,
    //row: 54
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    // Found row 55 at index 372
    //row: 56
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,
    //row: 57
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,
    // Found row 58 at index 392
    // Found row 59 at index 392
    //row: 60
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xffff,
    //row: 61
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,
    //row: 62
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0x6168,
    //row: 63
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0xffdf,0xffdf,0xd4b4,
    //row: 64
    0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xffff,0xffff,0xffff,
    //row: 65
    0xd4b4,0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xffff,
    //row: 66
    0xd4b4,0xd4b4,0xd4b4,0xd4b4,
};

static const row_metadata_t walk-16_metadata_71x67[] = {
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
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 127,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 127,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 137,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 147,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 157,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 168,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 179,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 190,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 203,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 217,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 231,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 246,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 262,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 278,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 294,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 306,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 315,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 324,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 333,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 342,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 352,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 362,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 372,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 372,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 382,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 392,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 392,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 392,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 403,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 414,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 425,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 438,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 454,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 470,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 485,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 4
    },
};

static const image_data_t walk-16_71x67 = {
    .pixels = walk-16_pixels_71x67,
    .metadata = walk-16_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 978 bytes of pixel data (4268 pixels removed)
// 335 bytes of metadata added
// 7.2460 compression ratio
// 0.1732x original size
