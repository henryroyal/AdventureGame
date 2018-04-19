#include <ncurses.h>
#include <stdbool.h>

#include <screen.h>
#include <clock.h>
#include <grid.h>
#include <actor.h>
#include <stdlib.h>


int main() {
    WINDOW window;

    bool r = true;
    bool *running = &r;

    gameclock_t clock;
    initialize_clock(&clock);

    gamegrid_t *grid = new_grid();

    init_screen(&window);

    do {
        tick(&clock, grid, running);
    } while (*running);

    destroy_screen();
    free(grid);

    return 0;
}
