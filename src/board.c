#include "board.h"

#include <stdio.h>

void printBoard(sudokuBoard board) {
    for (unsigned int row = 0; row < BOARD_ROWS; row++) {
        if (row != 0 && row % BOX_HEIGHT == 0) {
            fputs("------+-------+------\n", stdout);
        }

        for (unsigned int col = 0; col < BOARD_COLS; col++) {
            if (col != 0 && col % BOX_WIDTH == 0) {
                fputs("| ", stdout);
            }
            fprintf(stdout, "%-2u", board[row][col]);

        }
        fputc('\n', stdout);
    }
    fputc('\n', stdout);
}
