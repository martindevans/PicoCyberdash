#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) climb-2_pixels_71x67[] = {
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
    0x65bf,
    //row: 17
    0x8932,0x8932,0x6168,0x8932,0x8932,0x52f6,0x65bf,0x65bf,
    //row: 18
    0x8932,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,0x8932,0x65bf,0x65bf,
    //row: 19
    0x8932,0x8932,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,0x65bf,0x65bf,
    //row: 20
    0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x52f6,0x65bf,0x65bf,
    //row: 21
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x8932,0xe8f8,0xe8f8,0x8932,0x52f6,0x52f6,
    //row: 22
    0x8932,0xe8f8,0xe8f8,0xe8f8,0x8932,0x8932,0xe8f8,0xe8f8,0xe8f8,0x8932,0x52f6,0x52f6,
    //row: 23
    0x6168,0x8932,0xe8f8,0xe8f8,0xe8f8,0xe8f8,0xe8f8,0xe8f8,0x8932,0x8932,0x52f6,0x52f6,
    //row: 24
    0x65bf,0x65bf,0x6168,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x6168,0x52f6,0x1060,
    //row: 25
    0x65bf,0x65bf,0x65bf,0x6168,0x6168,0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,0x6168,0x6168,0x1060,0x6ff,
    //row: 26
    0x65bf,0x65bf,0x65bf,0xbfd,0x6168,0x6168,0x8932,0x8932,0x6168,0x8932,0x6168,0x6168,0xbfd,0x6ff,0x6ff,
    //row: 27
    0x65bf,0x65bf,0x65bf,0xbfd,0xbfd,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 28
    0x65bf,0x52f6,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 29
    0x52f6,0x52f6,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,
    //row: 30
    0x52f6,0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,
    //row: 31
    0x1060,0x1060,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,
    //row: 32
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,
    //row: 33
    0x6ff,0x6ff,0x6ff,0xffdf,0xbfd,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,
    // Found row 34 at index 205
    // Found row 35 at index 208
    //row: 36
    0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,
    // Found row 37 at index 195
    // Found row 38 at index 141
    //row: 39
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x1060,0x1060,0x1060,
    //row: 40
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0x1060,0x1060,
    //row: 41
    0xbfd,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,
    //row: 42
    0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,
    //row: 43
    0x6168,0x6168,0x6168,0x6168,0x1060,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,
    //row: 44
    0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 45
    0x65bf,0x6168,0x6168,0x6168,0x1060,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 46
    0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    // Found row 47 at index 306
    //row: 48
    0x65bf,0x52f6,0x52f6,0x52f6,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,
    //row: 49
    0x65bf,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,
    //row: 50
    0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0x1060,
    //row: 51
    0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xffff,
    // Found row 52 at index 126
    // Found row 53 at index 126
    // Found row 54 at index 253
    // Found row 55 at index 257
    // Found row 56 at index 257
    // Found row 57 at index 12
    // Found row 58 at index 347
    // Found row 59 at index 12
    // Found row 60 at index 347
    // Found row 61 at index 12
    //row: 62
    0xffff,0xd4b4,
    //row: 63
    0xffff,0xd4b4,0xd4b4,
    // Found row 64 at index 362
    // Row 65 is empty
    // Row 66 is empty
};

static const row_metadata_t climb-2_metadata_71x67[] = {
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
        .first_pixel_xpos = 42,
        .pixel_count = 1
    },
    {
        .offset_to_first_pixel = 1,
        .is_discontinuous = false,
        .first_pixel_xpos = 36,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 9,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 19,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 29,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 41,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 53,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 65,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 77,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 91,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 106,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 121,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 136,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 150,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 164,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 178,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 192,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 204,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 205,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 208,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 215,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 195,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 141,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 222,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 234,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 246,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 258,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 270,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 282,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 294,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 306,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 306,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 318,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 329,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 340,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 350,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 126,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 126,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 253,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 257,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 257,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 12,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 347,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 12,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 347,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 12,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 360,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 2
    },
    {
        .offset_to_first_pixel = 362,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 3
    },
    {
        .offset_to_first_pixel = 362,
        .is_discontinuous = false,
        .first_pixel_xpos = 33,
        .pixel_count = 3
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

static const image_data_t climb-2_71x67 = {
    .pixels = climb-2_pixels_71x67,
    .metadata = climb-2_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 730 bytes of pixel data (4392 pixels removed)
// 335 bytes of metadata added
// 8.9333 compression ratio
// 0.1472x original size
