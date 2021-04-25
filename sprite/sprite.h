#ifndef _SPRITE2_H
#define _SPRITE2_H

#include "pico/types.h"

#include "pico/scanvideo.h"
#include "pico/scanvideo/composable_scanline.h"

typedef struct
{
    // Offset into data array which is the first pixel for this row
    uint32_t offset_to_first_pixel:19;

    // Indicates if this row is discontinuous (requires alpha blending)
    bool is_discontinuous:1;

    // The X position of the pixel pointed to by `offset_to_first_pixel`.
    // Not the first pixel if the row starts with a run of transparent pixels.
    uint16_t first_pixel_xpos:10;

    // Number of pixels to draw in this row
    uint16_t pixel_count:10;
} __attribute__((packed)) row_metadata_t;

#include <assert.h>
static_assert(sizeof(row_metadata_t) == 5, "Not right size!");

typedef struct {
    const uint16_t *pixels;
    const row_metadata_t *metadata;
    uint16_t size_x;
    uint16_t size_y;
} image_data_t;

typedef struct {
    int16_t x;
    int16_t y;
    const image_data_t *data;
} sprite_t;

typedef struct {
    uint16_t left;
    const uint16_t *first_pixel;
    uint16_t count;
    bool span_discontinuous;
} intersect_t;

static int cmp_sprite_x(const void *a, const void *b) {
    sprite_t *aa = (sprite_t*)a;
    sprite_t *bb = (sprite_t*)b;
    return aa->x - bb->x;
}

// Always-inline else the compiler does rash things like passing structs in memory
static inline intersect_t get_sprite_intersect(const sprite_t *sp, uint16_t raster_y, uint raster_w)
{
    uint16_t size_y = sp->data->size_y;
    intersect_t isct = {0};

    // Calculate offset to the correct row. Early out if it's not within the bounds of the sprite
    int16_t row = ((int16_t)raster_y) - sp->y;
    if (row < 0 || row >= size_y)
        return isct;

    // Get metadata for the given row
    const row_metadata_t *meta = &sp->data->metadata[row];
    isct.span_discontinuous = meta->is_discontinuous;
    if (meta->pixel_count == 0)
        return isct;

    // Check sides of sprite against sides of the screen
    uint32_t pixel_idx = meta->offset_to_first_pixel;
    int16_t left = sp->x + (int16_t)(meta->first_pixel_xpos);
    int16_t width = meta->pixel_count;

    // Check if it's off the left of the screen. Adjust offset and width to compensate.
    if (left < 0)
    {
        pixel_idx -= left;
        width = MAX(0, width + left);
        left = 0;
    }

    // Check if it's off the right of the screen. Adjust size to compensate
    int16_t overhang = (left + width) - raster_w;
    if (overhang > 0)
    {
        width -= overhang;
    }

    isct.left = (uint16_t)left;
    isct.first_pixel = &sp->data->pixels[pixel_idx];
    isct.count = (uint16_t)MAX(0, width);

    return isct;
}

// ----------------------------------------------------------------------------
// Functions from sprite.S

// Constant-colour span
void sprite_fill8(uint8_t *dst, uint8_t colour, uint len);
void sprite_fill16(uint16_t *dst, uint16_t colour, uint len);

// Block image transfers
void sprite_blit8(uint8_t *dst, const uint8_t *src, uint len);
void sprite_blit8_alpha(uint8_t *dst, const uint8_t *src, uint len);
void sprite_blit16(uint16_t *dst, const uint16_t *src, uint len);
void sprite_blit16_alpha(uint16_t *dst, const uint16_t *src, uint len);

#endif