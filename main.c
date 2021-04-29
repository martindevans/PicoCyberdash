/*
 * Copyright (c) 2020 Raspmelon Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "pico.h"
#include "pico/error.h"
#include "hardware/uart.h"
#include "hardware/gpio.h"
#include "pico/scanvideo.h"
#include "pico/scanvideo/composable_scanline.h"
#include "pico/multicore.h"
#include "pico/sync.h"
#include "pico/stdlib.h"
#include "hardware/clocks.h"
#include "hardware/watchdog.h"
#include "hardware/vreg.h"
#include "hardware/interp.h"
#include "hardware/dma.h"
#include "hardware/irq.h"

#include "bsp/board.h"
#include "tusb.h"
#include "hid/hid.h"

#define VGA_MODE vga_mode_640x480_60

#include "sprite.h"
#include "sprite_dma.h"
#include "physics/aabb.h"
#include "sprite/scanline_rendering.h"

#include "content/SaikyoBlack.h"
#include "content/sprites.h"

#include "hardware/structs/vreg_and_chip_reset.h"

#define DEBUG_STR_MAX_LEN 50
static int debug_str_length = 0;
static char debug_str[DEBUG_STR_MAX_LEN];

static const uint VSYNC_PIN = PICO_SCANVIDEO_COLOR_PIN_BASE + PICO_SCANVIDEO_COLOR_PIN_COUNT + 1;
static const uint button_pins[] = {0, 6, 11};
static uint32_t button_state = 0;

static sprite_t bg0 = {
    .x = 0,
    .y = 0,
    .data = &skyline_a_256x380
};
static sprite_t bg1 = {
    .x = 256,
    .y = 0,
    .data = &skyline_a_256x380
};
static sprite_t bg2 = {
    .x = 512,
    .y = 0,
    .data = &skyline_b_256x380
};
static sprite_t bg3 = {
    .x = 768,
    .y = 0,
    .data = &skyline_a_256x380
};

void __time_critical_func(render_scanline)(struct scanvideo_scanline_buffer *dest, int dma_channel) {
    uint16_t l = scanvideo_scanline_number(dest->scanline_id);
    uint16_t *colour_buf = raw_scanline_prepare(dest, VGA_MODE.width);

    // Begin DMA fill of the background.
    const uint16_t bgcol = PICO_SCANVIDEO_PIXEL_FROM_RGB8(0x00, 0x00, 0x3D);
    sprite_fill16_dma(colour_buf, bgcol, 0, VGA_MODE.width, dma_channel);

    // Draw the BG sprites
    sprite_sprite16_dma(colour_buf, &bg0, l, VGA_MODE.width, dma_channel);
    sprite_sprite16_dma(colour_buf, &bg1, l, VGA_MODE.width, dma_channel);
    sprite_sprite16_dma(colour_buf, &bg2, l, VGA_MODE.width, dma_channel);
    sprite_sprite16_dma(colour_buf, &bg3, l, VGA_MODE.width, dma_channel);

    // Draw debug string
    if (debug_str_length > 0) {
        sprite_string_dma(colour_buf, 10, 10, &debug_str[0], debug_str_length, &SaikyoBlack, l, VGA_MODE.width, dma_channel);
    }

    // Wait for all DMA job to complete
    dma_channel_wait_for_finish_blocking(dma_channel);

    raw_scanline_finish(dest);
}

void __time_critical_func(async_update_logic)(uint32_t frame_number) {
    tuh_task();
    hid_task();
}

static mutex_t hid_input_lock;
static bool hid_jump_pressed = false;
static bool hid_left_pressed = false;
static bool hid_right_pressed = false;
void process_kbd_report(hid_keyboard_report_t const *p_new_report) {

    mutex_enter_blocking(&hid_input_lock);
    hid_jump_pressed = false;
    hid_left_pressed = false;
    hid_right_pressed = false;

    for (size_t i = 0; i < 6; i++) {
        switch (p_new_report->keycode[i]) {
            case HID_KEY_ARROW_UP:
            case HID_KEY_W:
                hid_jump_pressed = true;
                break;
            case HID_KEY_ARROW_LEFT:
            case HID_KEY_A:
                hid_left_pressed = true;
                break;
            case HID_KEY_ARROW_RIGHT:
            case HID_KEY_D:
                hid_right_pressed = true;
                break;
        }
    }
    mutex_exit(&hid_input_lock);
}

void __time_critical_func(frame_update_logic)(uint32_t frame_number) {

    // Read player input from hardware buttons
    bool in_jump = (button_state & 2) != 0;
    bool in_left = (button_state & 4) != 0;
    bool in_right = (button_state & 1) != 0;

    // Read play input from keyboard
    mutex_enter_blocking(&hid_input_lock);
    in_jump = hid_jump_pressed;
    in_left = hid_left_pressed;
    in_right = hid_right_pressed;
    mutex_exit(&hid_input_lock);
    
    // shift bg
    if (frame_number & 3)
    {
        bg0.x--;
        bg1.x--;
        bg2.x--;
        bg3.x--;

        if (bg0.x == -256) {
            bg0.x+=1024;
        }
        if (bg1.x == -256) {
            bg1.x+=1024;
        }
        if (bg2.x == -256) {
            bg2.x+=1024;
        }
        if (bg3.x == -256) {
            bg3.x+=1024;
        }
    }

    debug_str_length = snprintf(debug_str, DEBUG_STR_MAX_LEN, "HELLO, WORLD");
}

int main(void) {
    
    // Set PSU into PWM mode for reduced ripple (and reduced efficiency)
    gpio_set_dir(23, true);
    gpio_pull_up(23);

    // Overclock
    vreg_set_voltage(VREG_VOLTAGE_1_30);
    set_sys_clock_khz(250000, true);

    // Setup serial communication
    stdio_init_all();

    // Initialise USB system
    board_init();
    tusb_init();

    // Initialise video system
    mutex_init(&hid_input_lock);
    init_scanline_rendering(&VGA_MODE);

    // Enter the infinite video loop
    render_loop();
}

