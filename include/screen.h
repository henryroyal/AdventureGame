//
// Created by henry on 4/14/18.
//

#include <clock.h>
#include <grid.h>

#ifndef ADVENTUREGAME_SCREEN_H
#define ADVENTUREGAME_SCREEN_H

void init_screen();

void tick(gameclock_t *c, gamegrid_t *g, bool *running);

void destroy_screen();

#endif //ADVENTUREGAME_SCREEN_H
