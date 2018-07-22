#pragma once

#include <stdint.h>
#include <stdbool.h>

void ili9341_write_frame_gb(uint16_t* buffer);
void ili9341_init();
void ili9341_poweroff();
void ili9341_prepare();
void send_reset_drawing(int left, int top, int width, int height);
void send_continue_wait();
void send_continue_line(uint16_t *line, int width, int lineCount);
void send_one_line_blocking(uint16_t *line, int width, int yIndex, bool shouldWait);

void ili9341_write_frame_sms(uint8_t* buffer, uint8_t color[32][3], uint8_t isGameGear);
void ili9341_write_frame_nes(uint8_t* buffer, uint16_t* myPalette, uint8_t frameParity);

void backlight_percentage_set(int value);
void ili9341_write_frame(uint16_t* buffer);
void ili9341_write_frame_rectangle(short left, short top, short width, short height, uint16_t* buffer);
void ili9341_clear(uint16_t color);
void ili9341_write_frame_rectangleLE(short left, short top, short width, short height, uint16_t* buffer);
void display_tasktonotify_set(int value);

int is_backlight_initialized();
