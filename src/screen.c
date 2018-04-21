//
// Created by henry on 4/14/18.
//

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <ncurses.h>
#include <unistd.h>

#include <clock.h>
#include <grid.h>
#include <screen.h>


void init_screen(WINDOW *window) {
    window = initscr();

    if (!window) {
        printf("Could not initialize curses window\n");
        exit(1);
    }

    keypad(window, TRUE);

    cbreak();
    noecho();

    int err = resizeterm(25, 25);
    assert(err != ERR);
}

/*
 * tick is called once per unit of game time
 * increment the clock,
 * update the state of the grid,
 * refresh the screen
 */
void tick(gameclock_t *c, gamegrid_t *g, bool *running) {
    //mvprintw(*(c->Ticks), 0, "tick\n");


    print_test(g);

    increment_clock(c);
    sleep(1);
    refresh();

    if (*(c->Ticks) >= LIMIT_TICKS) {
        *running = false;
    }
}

void destroy_screen() {
    if (endwin() != OK) {
        printf("Something went wrong while calling endwin\n");
    }
}


void print_test(gamegrid_t *g) {

    char c[] = "*";

    clear();
    for (int x = 0; x <= 125; ++x) {

        for (int y = 0; y <= 50; ++y) {

            mvprintw(y, x, c);

        }
    }

    refresh();

}
