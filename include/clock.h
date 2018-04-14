//
// Created by henry on 3/25/18.
//

#include <stdint.h>
#include <pthread.h>
#include <grid.h>


#ifndef ADVENTUREGAME_CLOCK_H
#define ADVENTUREGAME_CLOCK_H

#define LIMIT_TICKS 10

typedef uint_fast32_t ticker_t;

typedef struct gameclock {
    ticker_t *Ticks;
} gameclock_t;

void initialize_clock(gameclock_t *c);

void increment_clock(gameclock_t *c);


#endif //ADVENTUREGAME_CLOCK_H
