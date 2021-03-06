//
// Created by henry on 3/25/18.
//

#ifndef ADVENTUREGAME_GRID_H
#define ADVENTUREGAME_GRID_H

// grid coordinate points are always positive
typedef unsigned int coordinate_t;

// grid has one quadrant
#define GridMaxX 500
#define GridMaxY 500

typedef struct cell {
    coordinate_t X;
    coordinate_t Y;
} cell_t;

typedef struct gamegrid {
    cell_t Cells[GridMaxX][GridMaxY];
} gamegrid_t;

void initialize_grid(gamegrid_t *g);

#endif //ADVENTUREGAME_GRID_H
