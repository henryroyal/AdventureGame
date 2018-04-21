//
// Created by henry on 4/14/18.
//

#include <X11/Xlib.h>
#include <clock.h>
#include <grid.h>

#ifndef ADVENTUREGAME_SCREEN_H
#define ADVENTUREGAME_SCREEN_H

void init_screen(WINDOW *window);

void tick(gameclock_t *c, gamegrid_t *g, bool *running);

void destroy_screen();

void print_test(gamegrid_t *g);

#endif //ADVENTUREGAME_SCREEN_H
