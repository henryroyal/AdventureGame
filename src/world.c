//
// Created by henry on 3/27/18.
//
#include <stdio.h>
#include <stdlib.h>

#include <grid.h>
#include <actor.h>


void initialize_grid(gamegrid_t *g) {

    gamegrid_t NewGrid;

    for (coordinate_t x = 0; x <= GridMaxX; ++x) {

        coordinate_t *cellX = malloc(sizeof(coordinate_t));
        if (cellX) {
            *cellX = x;
        }

        for (coordinate_t y = 0; y <= GridMaxY; ++y) {

            coordinate_t *cellY = malloc(sizeof(coordinate_t));
            if (cellY) {
                *cellY = y;
            }

            cell_t cellptr;
            cellptr.ActorCount = 0;
            cellptr.X = cellX;
            cellptr.Y = cellY;


            *(*((NewGrid.Cells)+x)+y) = cellptr;
        };
    }

    *g = NewGrid;
}


actor_t new_actor(actortype_t type, actorstate_t state) {
}
