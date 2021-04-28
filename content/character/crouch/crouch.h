#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) crouch_pixels_71x67[] = {
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
    // Row 25 is empty
    // Row 26 is empty
    // Row 27 is empty
    // Row 28 is empty
    // Row 29 is empty
    // Row 30 is empty
    // Row 31 is empty
    // Row 32 is empty
    // Row 33 is empty
    //row: 34
    0x8932,0x8932,0x8932,0x8932,0x8932,
    //row: 35
    0x8932,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 36
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 37
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x6168,0x8932,
    //row: 38
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 39
    0x8932,0x8932,0x8932,0x8932,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 40
    0x6168,0x6168,0x8932,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 41
    0x8932,0x8932,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 42
    0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,0x5186,0xffdf,0xffdf,0xffdf,0x659f,0x1040,0xffdf,0xffdf,0xffdf,0x659f,0x1040,0xffdf,0xffdf,
    0xffdf,0x51a6,0x9bb0,0x9bb0,0x51a6,0x9bb0,0x9bb0,0x51a6,
    //row: 43
    0xbfd,0x52f6,0x52f6,0x52f6,0x659f,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1040,0xffdf,0xffdf,0xffdf,0x659f,0xffdf,0xffdf,0xffdf,0x1060,0x1060,
    0x1060,0x1060,0x9bb0,0x9bb0,0x1060,
    //row: 44
    0xbfd,0x52f6,0x52f6,0x52f6,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,0x65bf,0x65bf,0x65bf,0x65bf,0x52f6,0x52d6,0x65bf,0x65bf,0x65bf,0x1060,
    0x52f6,0x1060,0x51a6,0x51a6,0x1060,
    //row: 45
    0xbfd,0x52f6,0x52f6,0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x65bf,0x65bf,0x52f6,0x52f6,0x52f6,0x52f6,0x52f6,0x52f6,0x52f6,0x1060,
    0x1060,0x52f6,0x52d6,0x51a6,0x51a6,0x51a6,
    //row: 46
    0xbfd,0x1060,0x1060,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x1060,0x659f,0x659f,0x659f,0x52d6,0x52d6,0x52d6,0x52d6,0x52d6,0x52d6,0x1060,
    0x1060,0x1060,
    //row: 47
    0xbfd,0xbfd,0x1060,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,
    //row: 48
    0xbfd,0xbfd,0x1060,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 49
    0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 50
    0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,
    //row: 51
    0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,
    //row: 52
    0x6ff,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,
    //row: 53
    0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6168,0x6168,0x52f6,0x52f6,0x6168,0x6168,
    //row: 54
    0x1060,0x1060,0x1060,0xbfd,0x6168,0x6168,0x6168,0x6168,0x52f6,0x65bf,0x6168,0x6168,
    //row: 55
    0x52f6,0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x65bf,0x65bf,0x6168,
    //row: 56
    0x65bf,0x52f6,0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x65bf,0x6168,
    //row: 57
    0x65bf,0x52f6,0x1060,0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x52f6,0x6168,
    //row: 58
    0x65bf,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 59
    0x52f6,0x52f6,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0xffdf,0x6168,0x6168,0x6168,0xd4b4,
    //row: 60
    0x65bf,0x65bf,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1040,0x1040,0x1040,0xffdf,0x6168,0xd4b4,0x6168,
    //row: 61
    0x52f6,0x52f6,0x65bf,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1040,0x1040,0xffdf,0xffdf,0xd4b4,0x6168,0xd4b4,
    //row: 62
    0x52f6,0x1060,0x52f6,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1040,0x6148,0x6148,0xffdf,0xd494,0x6168,0xd4b4,0x6168,
    //row: 63
    0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1040,0x1060,0x1060,0x1040,0x6148,0x6148,0x6148,0xd494,0xd494,0xd4b4,0x6168,0xd4b4,
    //row: 64
    0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1040,0x1040,0x1060,0x1060,0x1040,0x6148,0x6148,0x6148,0x6148,0xffdf,0xd494,0x6168,0xd4b4,0xd4b4,
    //row: 65
    0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1040,0x1040,0xd4b4,0xd4b4,0xd4b4,0x6148,0x6148,0x6148,0x6148,0x6148,0x6148,0xd494,0xd4b4,0xd4b4,
    0xffff,
    //row: 66
    0x1060,0x1060,0x1060,0x1060,0x1060,0x1040,0x1040,0xd4b4,0xffff,0xffff,0xd4b4,0xd494,0x6148,0xffdf,0xffdf,0xffdf,0x1040,0xffff,0xffff,0xffff,
};

static const row_metadata_t crouch_metadata_71x67[] = {
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
        .first_pixel_xpos = 27,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 5,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 12,
        .is_discontinuous = false,
        .first_pixel_xpos = 25,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 21,
        .is_discontinuous = false,
        .first_pixel_xpos = 25,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 31,
        .is_discontinuous = false,
        .first_pixel_xpos = 24,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 42,
        .is_discontinuous = false,
        .first_pixel_xpos = 24,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 53,
        .is_discontinuous = false,
        .first_pixel_xpos = 24,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 64,
        .is_discontinuous = false,
        .first_pixel_xpos = 25,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 72,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 28
    },
    {
        .offset_to_first_pixel = 100,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 26
    },
    {
        .offset_to_first_pixel = 126,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 26
    },
    {
        .offset_to_first_pixel = 152,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 27
    },
    {
        .offset_to_first_pixel = 179,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 23
    },
    {
        .offset_to_first_pixel = 202,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 212,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 221,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 230,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 238,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 247,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 257,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 268,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 280,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 292,
        .is_discontinuous = false,
        .first_pixel_xpos = 25,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 305,
        .is_discontinuous = false,
        .first_pixel_xpos = 25,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 318,
        .is_discontinuous = false,
        .first_pixel_xpos = 25,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 330,
        .is_discontinuous = true,
        .first_pixel_xpos = 24,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 343,
        .is_discontinuous = true,
        .first_pixel_xpos = 23,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 358,
        .is_discontinuous = true,
        .first_pixel_xpos = 22,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 375,
        .is_discontinuous = true,
        .first_pixel_xpos = 22,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 393,
        .is_discontinuous = true,
        .first_pixel_xpos = 22,
        .pixel_count = 19
    },
    {
        .offset_to_first_pixel = 412,
        .is_discontinuous = true,
        .first_pixel_xpos = 22,
        .pixel_count = 20
    },
    {
        .offset_to_first_pixel = 432,
        .is_discontinuous = true,
        .first_pixel_xpos = 21,
        .pixel_count = 21
    },
    {
        .offset_to_first_pixel = 453,
        .is_discontinuous = true,
        .first_pixel_xpos = 21,
        .pixel_count = 20
    },
};

static const image_data_t crouch_71x67 = {
    .pixels = crouch_pixels_71x67,
    .metadata = crouch_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 946 bytes of pixel data (4284 pixels removed)
// 335 bytes of metadata added
// 7.4270 compression ratio
// 0.1699x original size
