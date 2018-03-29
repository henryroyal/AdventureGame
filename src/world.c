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
        for (coordinate_t y = 0; y <= GridMaxY; ++y) {

            cell_t *cellptr = malloc(sizeof(cell_t));
            if (!cellptr) {
                return;
            }

            cellptr->ActorCount = 0;

            coordinate_t *cellX = malloc(sizeof(coordinate_t));
            if (cellX) {
                *cellX = x;
            }

            coordinate_t *cellY = malloc(sizeof(coordinate_t));
            if (cellY) {
                *cellY = y;
            }

           NewGrid.Cells[x][y] = cellptr;
        };
    }

    *g = NewGrid;
}


actor_t new_actor(actortype_t type, actorstate_t state) {
}
