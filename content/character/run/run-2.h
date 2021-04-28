#include <stdint.h>
#include "sprite.h"

static uint16_t __attribute__((aligned(2))) run-2_pixels_71x67[] = {
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
    0x8932,0x8932,0x8932,0x8932,0x8932,0x8932,
    //row: 19
    0x8932,0x8932,0x8932,0x6168,0x6168,0x6168,0x8932,0x8932,0x8932,
    //row: 20
    0x8932,0xe8f8,0xe8f8,0x8932,0x8932,0x6168,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 21
    0x8932,0x8932,0xe8f8,0xe8f8,0x8932,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 22
    0x8932,0xe8f8,0xe8f8,0x8932,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x8932,
    //row: 23
    0x8932,0x8932,0x8932,0x51a6,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,0x6168,
    //row: 24
    0x6168,0x8932,0x51a6,0x413f,0x51a6,0x51a6,0x9bb0,0x9bb0,0x51a6,0x51a6,
    //row: 25
    0x8932,0x6168,0x6168,0x6168,0x52f6,0x65bf,0x65bf,0x65bf,
    // Found row 26 at index 72
    //row: 27
    0x6ff,0xbfd,0x52f6,0x52f6,0x52f6,
    //row: 28
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x52f6,
    //row: 29
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 30
    0x52f6,0x52f6,0xffdf,0xffdf,0xffdf,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 31
    0x52f6,0x52f6,0xffdf,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,
    //row: 32
    0x52f6,0x52f6,0x52f6,0x1060,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,
    //row: 33
    0x52f6,0x52f6,0x52f6,0x1060,0xbfd,0xbfd,0xffdf,0xffdf,0x6ff,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0xffdf,0x65bf,0x65bf,
    //row: 34
    0x52f6,0x52f6,0xffdf,0xffdf,0xffdf,0xffdf,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0xffdf,0xffdf,0x65bf,0x65bf,
    //row: 35
    0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x6ff,0x1060,0x65bf,0x65bf,0x65bf,
    //row: 36
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0xbfd,0xbfd,0x6ff,0x6ff,0x1060,0x65bf,0x65bf,
    //row: 37
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xffdf,0xffdf,0x6ff,0x6ff,0x1060,0x65bf,
    //row: 38
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xffdf,0xffdf,0xffdf,0xffdf,0x6ff,
    // Found row 39 at index 228
    //row: 40
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,
    //row: 41
    0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0x6ff,0xbfd,0xbfd,0x1060,0x1060,0x1060,
    //row: 42
    0x6168,0x6168,0x6ff,0x6ff,0x6ff,0x6ff,0x6168,0x6168,0x1060,0x1060,0x1060,
    //row: 43
    0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,
    //row: 44
    0x65bf,0x65bf,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 45
    0x65bf,0x65bf,0x6168,0x6168,0x6168,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 46
    0x65bf,0x65bf,0x65bf,0x65bf,0x6168,0x6168,0x1060,0x1060,0x1060,0x1060,0x1060,0x52f6,0x52f6,0x52f6,
    //row: 47
    0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x65bf,0x1060,0x1060,0x1060,0x52f6,0x52f6,0x52f6,0x52f6,0x1060,0x1060,
    //row: 48
    0x6168,0x6168,0x65bf,0x65bf,0x65bf,0x65bf,0xffdf,0xffdf,0xffdf,0x52f6,0x52f6,0x52f6,0x52f6,0x1060,0x1060,0x1060,
    //row: 49
    0x6168,0x6168,0x6168,0x6168,0x65bf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x52f6,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 50
    0x6168,0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,
    // Found row 51 at index 377
    //row: 52
    0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 53
    0xffff,0xffff,0xffff,0x6168,0xffff,0x6168,0xffff,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 54
    0xffff,0xffff,0xffff,0x6168,0x6168,0xffff,0x6168,0xffff,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,0x1060,
    //row: 55
    0xffff,0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0x6168,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 56
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x6168,0x6168,0x6168,0x6168,0x6168,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0x1060,0x1060,
    //row: 57
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0x1060,0xd4b4,
    0x1060,
    //row: 58
    0xffff,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,
    0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0x1060,0xd4b4,
    0x1060,0xd4b4,
    //row: 59
    0xd4b4,0x1060,0xd4b4,0x1060,0xffdf,0xffdf,0xffdf,0xd4b4,
    //row: 60
    0x1060,0xd4b4,0x1060,0xffdf,0xffdf,0xd4b4,0xd4b4,
    //row: 61
    0x1060,0x1060,0xd4b4,0xd4b4,0xd4b4,0xd4b4,
    // Found row 62 at index 677
    // Found row 63 at index 617
    // Row 64 is empty
    // Row 65 is empty
    // Row 66 is empty
};

static const row_metadata_t run-2_metadata_71x67[] = {
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
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 6,
        .is_discontinuous = false,
        .first_pixel_xpos = 41,
        .pixel_count = 9
    },
    {
        .offset_to_first_pixel = 15,
        .is_discontinuous = false,
        .first_pixel_xpos = 40,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 26,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 38,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 12
    },
    {
        .offset_to_first_pixel = 50,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 61,
        .is_discontinuous = false,
        .first_pixel_xpos = 39,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 71,
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
        .first_pixel_xpos = 38,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 91,
        .is_discontinuous = false,
        .first_pixel_xpos = 37,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 99,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 115,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 131,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 147,
        .is_discontinuous = true,
        .first_pixel_xpos = 30,
        .pixel_count = 20
    },
    {
        .offset_to_first_pixel = 167,
        .is_discontinuous = true,
        .first_pixel_xpos = 31,
        .pixel_count = 19
    },
    {
        .offset_to_first_pixel = 186,
        .is_discontinuous = false,
        .first_pixel_xpos = 36,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 200,
        .is_discontinuous = false,
        .first_pixel_xpos = 35,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 214,
        .is_discontinuous = true,
        .first_pixel_xpos = 34,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 228,
        .is_discontinuous = true,
        .first_pixel_xpos = 29,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 228,
        .is_discontinuous = false,
        .first_pixel_xpos = 29,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 245,
        .is_discontinuous = false,
        .first_pixel_xpos = 28,
        .pixel_count = 10
    },
    {
        .offset_to_first_pixel = 255,
        .is_discontinuous = false,
        .first_pixel_xpos = 28,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 266,
        .is_discontinuous = false,
        .first_pixel_xpos = 28,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 277,
        .is_discontinuous = false,
        .first_pixel_xpos = 28,
        .pixel_count = 11
    },
    {
        .offset_to_first_pixel = 288,
        .is_discontinuous = false,
        .first_pixel_xpos = 27,
        .pixel_count = 13
    },
    {
        .offset_to_first_pixel = 301,
        .is_discontinuous = false,
        .first_pixel_xpos = 27,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 315,
        .is_discontinuous = false,
        .first_pixel_xpos = 27,
        .pixel_count = 14
    },
    {
        .offset_to_first_pixel = 329,
        .is_discontinuous = false,
        .first_pixel_xpos = 27,
        .pixel_count = 15
    },
    {
        .offset_to_first_pixel = 344,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 16
    },
    {
        .offset_to_first_pixel = 360,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 17
    },
    {
        .offset_to_first_pixel = 377,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 377,
        .is_discontinuous = true,
        .first_pixel_xpos = 26,
        .pixel_count = 18
    },
    {
        .offset_to_first_pixel = 395,
        .is_discontinuous = true,
        .first_pixel_xpos = 11,
        .pixel_count = 34
    },
    {
        .offset_to_first_pixel = 429,
        .is_discontinuous = true,
        .first_pixel_xpos = 10,
        .pixel_count = 35
    },
    {
        .offset_to_first_pixel = 464,
        .is_discontinuous = true,
        .first_pixel_xpos = 9,
        .pixel_count = 37
    },
    {
        .offset_to_first_pixel = 501,
        .is_discontinuous = true,
        .first_pixel_xpos = 8,
        .pixel_count = 38
    },
    {
        .offset_to_first_pixel = 539,
        .is_discontinuous = true,
        .first_pixel_xpos = 8,
        .pixel_count = 39
    },
    {
        .offset_to_first_pixel = 578,
        .is_discontinuous = true,
        .first_pixel_xpos = 7,
        .pixel_count = 41
    },
    {
        .offset_to_first_pixel = 619,
        .is_discontinuous = true,
        .first_pixel_xpos = 7,
        .pixel_count = 42
    },
    {
        .offset_to_first_pixel = 661,
        .is_discontinuous = true,
        .first_pixel_xpos = 46,
        .pixel_count = 8
    },
    {
        .offset_to_first_pixel = 669,
        .is_discontinuous = true,
        .first_pixel_xpos = 47,
        .pixel_count = 7
    },
    {
        .offset_to_first_pixel = 676,
        .is_discontinuous = false,
        .first_pixel_xpos = 48,
        .pixel_count = 6
    },
    {
        .offset_to_first_pixel = 677,
        .is_discontinuous = false,
        .first_pixel_xpos = 49,
        .pixel_count = 4
    },
    {
        .offset_to_first_pixel = 617,
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

static const image_data_t run-2_71x67 = {
    .pixels = run-2_pixels_71x67,
    .metadata = run-2_metadata_71x67,
    .size_x = 71,
    .size_y = 67
};

// 1364 bytes of pixel data (4075 pixels removed)
// 335 bytes of metadata added
// 5.5998 compression ratio
// 0.2138x original size
