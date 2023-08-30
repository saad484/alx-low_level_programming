#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @board: the 8x8 chessboard represented as a two-dimensional array of
 * characters
 */
void print_chessboard(char (*board)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(board[i][j]);
}
_putchar('\n');
}
}
