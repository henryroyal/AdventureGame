//
// Created by henry on 4/14/18.
//

#include <clock.h>
#include <grid.h>

#include <ncurses.h>
#include <unistd.h>


void init_screen() {

}

/*
 * tick is called once per unit of game time
 * increment the clock,
 * update the state of the grid,
 * refresh the screen
 */
void tick(gameclock_t *c, gamegrid_t *g, bool *running) {
    mvprintw(0, 0, "tick\n");
    increment_clock(c);
    sleep(1);
    refresh();

    if (*(c->Ticks) >= LIMIT_TICKS) {
        *running = false;
    }
}
