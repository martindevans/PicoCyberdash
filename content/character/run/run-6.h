#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) run-6_pixels_71x67[] = {
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
    //row: 18
    0x8932,0x8932,0x8932,0x8932,0x8932,
    //row: 19
    0x8932,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 20
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,
    //row: 21
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x6168,0x8932,
    //row: 22
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 23
    0x8932,0x8932,0x8932,0x8932,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 24
    0x6168,0x6168,0x8932,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 25
    0x8932,0x8932,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 26
    0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 27
    0x52f6,0x52f6,0x52f6,0x52f6,0x52f6,
    //row: 28
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x52f6,
    //row: 29
    0x65bf,0x65bf,0x1060,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0xbfd,
    //row: 30
    0x65bf,0x65bf,0x65bf,0x1060,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,0xbfd,0xbfd,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0x65bf,0x65bf,0x65bf,
    //row: 31
    0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,0xbfd,0xbfd,0x6ff,0x6ff,0xbfd,
    0x1060,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 32
    0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0x1060,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,
    0x1060,0x52f6,0x52f6,0x52f6,0x52f6,
    //row: 33
    0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,
    0x1060,0x52f6,0x52f6,0x52f6,0x52f6,
    //row: 34
    0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,
    //row: 35
    0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,
    // Found row 36 at index 226
    //row: 37
    0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,
    //row: 38
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    // Found row 39 at index 256
    // Found row 40 at index 256
    //row: 41
    0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,
    //row: 42
    0x1060,0x6168,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x6168,0x6168,
    //row: 43
    0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x65bf,
    //row: 44
    0x52f6,0x1060,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x65bf,0x65bf,0x65bf,
    //row: 45
    0x52f6,0x52f6,0x1060,0x6168,0x6168,0x6168,0x6168,0x6168,0x65bf,0x65bf,0x65bf,0x65bf,
    //row: 46
    0x52f6,0x52f6,0x1060,0x1060,0x1060,0x6168,0x6168,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x6168,
    //row: 47
    0x1060,0x52f6,0x52f6,0x52f6,0x1060,0x1060,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x6168,0x6168,0x6168,
    //row: 48
    0x1060,0x1060,0x1060,0x1060,0x52f6,0x52f6,0xffdf,0xffdf,0xffdf,0x65bf,0x65bf,0x65bf,0x6168,0x6168,0x6168,0x6168,
    //row: 49
    0x1060,0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 50
    0x1060,0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 51
    0x1060,0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 52
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 53
    0xd4b4,0xd4b4,0x1060,0xd4b4,0x1060,0xd4b4,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 54
    0xd4b4,0xd4b4,0x1060,0x1060,0xd4b4,0x1060,0xd4b4,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,
    //row: 55
    0xd4b4,0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0x1060,0xd4b4,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,
    //row: 56
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,
    //row: 57
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,
    0x6168,
    //row: 58
    0xd4b4,0xd4b4,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0xffff,
    0xffff,0xffff,
    //row: 59
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,
    //row: 60
    0xffff,0xffff,0x6168,0xffdf,0xffdf,0xffff,0xffff,
    //row: 61
    0x6168,0x6168,0xffff,0xffff,0xffff,0xffff,
    // Found row 62 at index 709
    // Found row 63 at index 689
    // Row 64 is empty
    // Row 65 is empty
    // Row 66 is empty
};

static const row_metadata_t run-6_metadata_71x67[] = {
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
        .first_pixel_xpos = 42,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 5,
        .is_discontinuous = false,
        .first_pixel_xpos = 41,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 12,
        .is_discontinuous = false,
        .first_pixel_xpos = 40,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 21,
        .is_discontinuous = false,
        .first_pixel_xpos = 40,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 31,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 42,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 53,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 64,
        .is_discontinuous = false,
        .first_pixel_xpos = 40,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 72,
        .is_discontinuous = false,
        .first_pixel_xpos = 41,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 79,
        .is_discontinuous = false,
        .first_pixel_xpos = 42,
        .pixel_count = 5
    },
    {
        .offset_to_first_pixel = 84,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 97,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 112,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 25
    },
    {
        .offset_to_first_pixel = 137,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 26
    },
    {
        .offset_to_first_pixel = 163,
        .is_discontinuous = true,
        .first_pixel_xpos = 27,
        .pixel_count = 27
    },
    {
        .offset_to_first_pixel = 190,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 27
    },
    {
        .offset_to_first_pixel = 217,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 235,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 226,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 251,
        .is_discontinuous = false,
        .first_pixel_xpos = 34,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 259,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 256,
        .is_discontinuous = false,
        .first_pixel_xpos = 28,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 256,
        .is_discontinuous = false,
        .first_pixel_xpos = 27,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 271,
        .is_discontinuous = false,
        .first_pixel_xpos = 26,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 283,
        .is_discontinuous = false,
        .first_pixel_xpos = 28,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 293,
        .is_discontinuous = false,
        .first_pixel_xpos = 28,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 303,
        .is_discontinuous = false,
        .first_pixel_xpos = 27,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 315,
        .is_discontinuous = false,
        .first_pixel_xpos = 27,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 327,
        .is_discontinuous = false,
        .first_pixel_xpos = 27,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 341,
        .is_discontinuous = false,
        .first_pixel_xpos = 27,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 356,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 372,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 389,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 407,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 425,
        .is_discontinuous = true,
        .first_pixel_xpos = 10,
        .pixel_count = 35
    },
    {
        .offset_to_first_pixel = 460,
        .is_discontinuous = true,
        .first_pixel_xpos = 10,
        .pixel_count = 35
    },
    {
        .offset_to_first_pixel = 495,
        .is_discontinuous = true,
        .first_pixel_xpos = 9,
        .pixel_count = 37
    },
    {
        .offset_to_first_pixel = 532,
        .is_discontinuous = true,
        .first_pixel_xpos = 8,
        .pixel_count = 38
    },
    {
        .offset_to_first_pixel = 570,
        .is_discontinuous = true,
        .first_pixel_xpos = 8,
        .pixel_count = 39
    },
    {
        .offset_to_first_pixel = 609,
        .is_discontinuous = true,
        .first_pixel_xpos = 7,
        .pixel_count = 41
    },
    {
        .offset_to_first_pixel = 650,
        .is_discontinuous = true,
        .first_pixel_xpos = 7,
        .pixel_count = 42
    },
    {
        .offset_to_first_pixel = 692,
        .is_discontinuous = true,
        .first_pixel_xpos = 46,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 700,
        .is_discontinuous = true,
        .first_pixel_xpos = 47,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 707,
        .is_discontinuous = false,
        .first_pixel_xpos = 48,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 709,
        .is_discontinuous = false,
        .first_pixel_xpos = 49,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 689,
        .is_discontinuous = false,
        .first_pixel_xpos = 50,
        .pixel_count = 1
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

static const image_data_t run-6_71x67 = {
    .pixels = run-6_pixels_71x67,
    .metadata = run-6_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 1426 bytes of pixel data (4044 pixels removed)
// 335 bytes of metadata added
// 5.4026 compression ratio
// 0.2203x original size
