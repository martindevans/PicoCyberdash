cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
include(pico_sdk_import.cmake)
include(pico_extras_import.cmake)

project(cyberdash)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(sprite)
add_subdirectory(content)
add_subdirectory(physics)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(cyberdash
        main.c
)

target_include_directories(cyberdash PRIVATE ${CMAKE_CURRENT_LIST_DIR})

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(cyberdash
    pico_stdlib
    pico_audio_i2s
    pico_scanvideo_dpi
    pico_multicore
    sprite
    tinyusb_host
    tinyusb_board
    pico_sd_card
)

target_compile_definitions(cyberdash PRIVATE
        PICO_SCANVIDEO_MAX_SCANLINE_BUFFER_WORDS=500
)

# Send Serial output to UART
pico_enable_stdio_usb(cyberdash 0)
pico_enable_stdio_uart(cyberdash 0)

pico_add_extra_outputs(cyberdash)

