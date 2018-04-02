#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//#include <ncurses.h>  // TODO

#include <clock.h>
#include <grid.h>
#include <actor.h>

#define LIMIT_TICKS 10

int main() {
    ticker_t maximum = LIMIT_TICKS;
    bool running = true;

    gameclock_t clock;
    initialize_clock(&clock);

    gamegrid_t *grid = new_grid();

    while (running) {
        increment_clock(&clock);
        printf("tick\n");
        if (*clock.Ticks == maximum) {
            running = false;
        }
        sleep(1);
    }
    printf("Game Over!\n");
    return 0;
}
