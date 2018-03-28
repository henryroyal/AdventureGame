//
// Created by henry on 3/25/18.
//

#include <clock.h>
#include <stdlib.h>


void initialize_clock(gameclock_t *c) {
    gameclock_t NewClock;
    ticker_t *ticker = malloc(sizeof(ticker_t));
    if (ticker) {
        *ticker = 0;
    }

    NewClock.Ticks = ticker;
    *c = NewClock;

}

void increment_clock(gameclock_t *c) {
    if (!c->Ticks) {
        return;
    }
    *(c->Ticks) += 1;
}
