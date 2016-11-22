#ifndef SDL_UI_H
#define SDL_UI_H

#include <stdint.h>
#include <stdlib.h>

struct mousecoord {
	uint8_t valid;
	uint8_t x;
	uint8_t y;
	uint8_t buttons;
	uint8_t b_press;
	uint8_t b_release;
	uint8_t press_x;
	uint8_t press_y;
	uint8_t release_x;
	uint8_t release_y;

};
extern struct mousecoord mousecoords;

typedef void (*cb_noparam)(void);

int hold(uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t bmask);
int click(uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t bmask);

int sdl_ui_main(cb_noparam mainfunc, cb_noparam updatefunc);

int sdl_ui_menu(int choice_c, char** choice_v, int sy);

int getdrop(char* filename, size_t fnlen);
int fillrect(uint32_t color, uint8_t x, uint8_t y, uint8_t w, uint8_t h);
int pset(uint32_t color, uint8_t x, uint8_t y);
int spr(uint8_t spr, int16_t x, int16_t y, uint8_t w, uint8_t h);
int s_addstr(const char* text, uint8_t x, uint8_t y, uint8_t font);
int s_addstr_c(const char* text, uint8_t y, uint8_t font);
int s_addstr_cx(const char* text, uint8_t x, uint8_t y, uint8_t font);

#endif
