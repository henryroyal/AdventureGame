//
// Created by henry on 3/25/18.
//

#ifndef ADVENTUREGAME_ACTORS_H
#define ADVENTUREGAME_ACTORS_H

#include <grid.h>

typedef enum actorstate {
    ALIVE,
    DEAD,
    INANIMATE,
} actorstate_t;

typedef enum actortype {
    HERO,
    VILLAN,
    OBSTACLE,
} actortype_t;

typedef struct actor {
    actorstate_t *State;
    actortype_t *Type;
} actor_t;

actor_t new_actor(actortype_t type, actorstate_t state);

#endif //ADVENTUREGAME_ACTORS_H
