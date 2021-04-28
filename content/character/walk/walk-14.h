#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) walk-14_pixels_71x67[] = {
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
    0x6ff,0xbfd,0x6ff,0x52f6,0x52f6,0x52f6,0xbfd,0x6ff,
    //row: 27
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x6ff,0x6ff,
    //row: 28
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0x6ff,
    //row: 29
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x1060,0x1060,0x6ff,
    //row: 30
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x1060,0xbfd,
    //row: 31
    0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 32
    0x1060,0x1060,0x1060,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,
    //row: 33
    0x65bf,0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 34
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 35
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,
    // Found row 36 at index 166
    // Found row 37 at index 166
    //row: 38
    0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,
    //row: 39
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0x52f6,
    //row: 40
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0x52f6,0x52f6,
    //row: 41
    0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0x52f6,0x52f6,
    //row: 42
    0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0x52f6,0x52f6,
    //row: 43
    0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0xffdf,0x52f6,
    //row: 44
    0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x6168,0xffdf,0x52f6,
    //row: 45
    0x65bf,0xffdf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x6168,0x6168,
    //row: 46
    0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,
    // Found row 47 at index 272
    //row: 48
    0x52f6,0x52f6,0x52f6,0x65bf,0x65bf,0x65bf,0x65bf,
    // Found row 49 at index 279
    // Found row 50 at index 279
    // Found row 51 at index 271
    // Found row 52 at index 271
    //row: 53
    0x1060,0x1060,0x1060,0xffdf,0x6168,0x6168,0x6168,
    // Found row 54 at index 286
    // Found row 55 at index 286
    // Found row 56 at index 286
    // Found row 57 at index 286
    // Found row 58 at index 287
    //row: 59
    0x1060,0x1060,0xffdf,0xffff,0xffff,0x6168,
    // Found row 60 at index 287
    //row: 61
    0xd4b4,0xd4b4,0xffdf,0xffff,0xffff,
    // Found row 62 at index 271
    // Found row 63 at index 299
    // Found row 64 at index 293
    //row: 65
    0xd4b4,0xd4b4,0xd4b4,0xd4b4,0xffff,0xffff,
    // Found row 66 at index 304
};

static const row_metadata_t walk-14_metadata_71x67[] = {
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
        .offset_to_first_pixel = 166,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 166,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 166,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 176,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 186,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 197,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 209,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 221,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 234,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 247,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 260,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 271,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 272,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 279,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 279,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 279,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 271,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 271,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 286,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 286,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 286,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 286,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 286,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 287,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 293,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 287,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 299,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 271,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 299,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 293,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 304,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 304,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 4
    },
};

static const image_data_t walk-14_71x67 = {
    .pixels = walk-14_pixels_71x67,
    .metadata = walk-14_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 620 bytes of pixel data (4447 pixels removed)
// 335 bytes of metadata added
// 9.9623 compression ratio
// 0.1356x original size
