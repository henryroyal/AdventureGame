#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include <clock.h>

#define LIMIT_TICKS 100

int main() {
    ticker_t maximum = LIMIT_TICKS;
    bool running = true;

    gameclock_t clock;
    initialize_clock(&clock);

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
