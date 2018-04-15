#include <stdbool.h>

#include <screen.h>
#include <clock.h>
#include <grid.h>
#include <actor.h>


int main() {
    bool r = true;
    bool *running = &r;

    gameclock_t clock;
    initialize_clock(&clock);

    gamegrid_t *grid = new_grid();

    init_screen();

    do {
        tick(&clock, grid, running);
    } while (*running);

    destroy_screen();

    return 0;
}
