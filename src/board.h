#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>

#define BOX_WIDTH 3
#define BOX_HEIGHT 3

#define BOARD_ROWS 9
#define BOARD_COLS 9

typedef uint8_t sudokuBoard[BOARD_ROWS][BOARD_COLS]; 

void printBoard(sudokuBoard board);

#endif