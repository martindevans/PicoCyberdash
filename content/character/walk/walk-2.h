#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) walk-2_pixels_71x67[] = {
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
    //row: 19
    0x8932,0x8932,0x8932,0x8932,0x8932,
    //row: 20
    0x8932,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 21
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 22
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x6168,0x8932,
    //row: 23
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 24
    0x8932,0x8932,0x8932,0x8932,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 25
    0x6168,0x6168,0x8932,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 26
    0x8932,0x8932,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 27
    0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 28
    0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,0xffdf,0xbfd,
    //row: 29
    0x6ff,0xbfd,0x6ff,0x52f6,0x52f6,0x52f6,0xbfd,0x6ff,
    //row: 30
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x6ff,0x6ff,
    //row: 31
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0x6ff,
    //row: 32
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x1060,0x1060,0x6ff,
    //row: 33
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x1060,0xbfd,
    //row: 34
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 35
    0x1060,0x1060,0x1060,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 36
    0x65bf,0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,
    //row: 37
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    // Found row 38 at index 157
    // Found row 39 at index 157
    // Found row 40 at index 157
    //row: 41
    0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 42
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 43
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,
    //row: 44
    0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,
    //row: 45
    0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x52f6,0x52f6,
    //row: 46
    0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0xffdf,0x52f6,
    //row: 47
    0x65bf,0x65bf,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0xffdf,0x52f6,
    //row: 48
    0x65bf,0xffdf,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 49
    0x1060,0x1060,0x1060,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 50
    0x52f6,0x52f6,0x52f6,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 51
    0x52f6,0x52f6,0x52f6,0x52f6,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 52
    0x1060,0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,
    //row: 53
    0x1060,0x1060,0x1060,0x1060,0x1060,0xffdf,0x6168,0x6168,0x6168,0x6168,
    //row: 54
    0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,
    //row: 55
    0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    //row: 56
    0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    //row: 57
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,
    //row: 58
    0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    //row: 59
    0xd4b4,0xd4b4,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    //row: 60
    0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,
    //row: 61
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xffff,
    //row: 62
    0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,
    //row: 63
    0xd4b4,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,
    //row: 64
    0xd4b4,0xd4b4,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,
    //row: 65
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xd4b4,
    //row: 66
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xffff,0xffff,
};

static const row_metadata_t walk-2_metadata_71x67[] = {
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
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 103,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 112,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 121,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 130,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 139,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 148,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 157,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 157,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 157,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 157,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 166,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 9
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
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 196,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 207,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 219,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 231,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 243,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 253,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 261,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 269,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 277,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 285,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 295,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 305,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 315,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 326,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 338,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 351,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 364,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 377,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 392,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 407,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 423,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 440,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 457,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 17
    },
};

static const image_data_t walk-2_71x67 = {
    .pixels = walk-2_pixels_71x67,
    .metadata = walk-2_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 948 bytes of pixel data (4283 pixels removed)
// 335 bytes of metadata added
// 7.4154 compression ratio
// 0.1701x original size
