#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) idle-4_pixels_71x67[] = {
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
    0x8932,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,0x8932,
    //row: 19
    0x8932,0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x8932,0x8932,0x8932,
    //row: 20
    0x8932,0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 21
    0x8932,0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 22
    0x8932,0x8932,0x6168,0x8932,0x6168,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 23
    0x8932,0x8932,0x6168,0x6168,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,
    //row: 24
    0x8932,0x6168,0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    //row: 25
    0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,0xffdf,0x52f6,0x65bf,0x65bf,
    //row: 26
    0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,0xffdf,0xbfd,0x6ff,0x52f6,0x65bf,0x65bf,
    //row: 27
    0x6ff,0xbfd,0x6ff,0x52f6,0x52f6,0x52f6,0xbfd,0x6ff,0x6ff,0x6ff,0xffdf,0x52f6,0x65bf,
    //row: 28
    0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,0x52f6,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0x65bf,0x65bf,
    //row: 29
    0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x65bf,0x65bf,0x65bf,
    //row: 30
    0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x1060,0x1060,0x6ff,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x65bf,0x65bf,0x65bf,
    //row: 31
    0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x1060,0x6ff,0xbfd,0xffdf,0x6ff,0x6ff,0x1060,0x65bf,0x65bf,0x65bf,
    //row: 32
    0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xffdf,0xffdf,0xffdf,0x1060,0x52f6,0x65bf,0x65bf,
    //row: 33
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 34
    0x1060,0x1060,0x6ff,0x6ff,0xffdf,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,
    //row: 35
    0x1060,0x1060,0x1060,0x1060,0xffdf,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 36
    0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 37
    0x65bf,0x65bf,0x65bf,0x65bf,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 38
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 39
    0x65bf,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 40
    0x6ff,0x65bf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,
    //row: 41
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x1060,0x1060,0x1060,0x1060,
    //row: 42
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 43
    0xbfd,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,
    // Found row 44 at index 317
    //row: 45
    0x6168,0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 46
    0x52f6,0x52f6,0x52f6,0x52f6,0xffdf,0xffdf,0x52f6,0x52f6,0x52f6,0x52f6,
    //row: 47
    0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0x52f6,0x52f6,0x52f6,0x65bf,
    //row: 48
    0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0x52f6,0x52f6,0x65bf,0x65bf,
    //row: 49
    0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0x65bf,0x65bf,0x65bf,0x1060,
    // Found row 50 at index 370
    //row: 51
    0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    // Found row 52 at index 381
    //row: 53
    0x6168,0x6168,0x6168,0x1060,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 54
    0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 55
    0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    //row: 56
    0x6168,0x6168,0x6168,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    //row: 57
    0x6168,0x6168,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    //row: 58
    0x6168,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    //row: 59
    0xffff,0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,
    //row: 60
    0x1060,0x6168,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,
    //row: 61
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,
    //row: 62
    0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,
    //row: 63
    0x1060,0x1060,0x1060,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,
    // Found row 64 at index 507
    //row: 65
    0xffff,0xffff,0xffff,0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0xffff,0xd4b4,
    //row: 66
    0xffff,0xffff,0xffff,0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xd4b4,0xd4b4,0xd4b4,0xd4b4,0xd4b4,
};

static const row_metadata_t idle-4_metadata_71x67[] = {
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
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 13,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 24,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 35,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 48,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 60,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 71,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 80,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 91,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 102,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 115,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 130,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 147,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 165,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 183,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 19
    },
    {
        .offset_to_first_pixel = 202,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 213,
        .is_discontinuous = true,
        .first_pixel_xpos = 28,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 224,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 235,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 245,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 255,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 266,
        .is_discontinuous = false,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 278,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 291,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 303,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 316,
        .is_discontinuous = false,
        .first_pixel_xpos = 30,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 317,
        .is_discontinuous = false,
        .first_pixel_xpos = 31,
        .pixel_count = 12
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
        .offset_to_first_pixel = 360,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 370,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 370,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 381,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 381,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 392,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 403,
        .is_discontinuous = true,
        .first_pixel_xpos = 33,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 414,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 425,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 436,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 447,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 459,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 471,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 483,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 495,
        .is_discontinuous = true,
        .first_pixel_xpos = 32,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 507,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 507,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 520,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 534,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 14
    },
};

static const image_data_t idle-4_71x67 = {
    .pixels = idle-4_pixels_71x67,
    .metadata = idle-4_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 1096 bytes of pixel data (4209 pixels removed)
// 335 bytes of metadata added
// 6.6485 compression ratio
// 0.1856x original size
