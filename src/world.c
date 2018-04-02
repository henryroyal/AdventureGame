//
// Created by henry on 3/27/18.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#include <grid.h>
#include <actor.h>


gamegrid_t *new_grid() {

    gamegrid_t *grid = malloc(sizeof(gamegrid_t));
    assert(grid);

    grid->Cells = malloc(sizeof(cell_t[GridMaxX][GridMaxY]));
    assert(grid->Cells);

    for (coordinate_t x = 0; x < GridMaxX; ++x) {
        coordinate_t *coordXptr = malloc(sizeof(coordinate_t));
        assert(coordXptr);

        for (coordinate_t y = 0; y < GridMaxY; ++y) {
            coordinate_t *coordYptr = malloc(sizeof(coordinate_t));
            assert(coordYptr);

            cell_t *cellptr = malloc(sizeof(coordinate_t));
            assert(cellptr);

            cellptr->X = x;
            cellptr->Y = y;

            cell_t *tmp = ((cell_t *) ((cell_t *) grid->Cells + x) + y);
            tmp = cellptr;
        };
    }

    return grid;
}


//actor_t new_actor(actortype_t type, actorstate_t state) {}
