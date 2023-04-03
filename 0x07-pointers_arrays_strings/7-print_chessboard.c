#include "main.h"
/**
 * print_chessboard - Prints the chessboard
 * @a: pointer to an array of arrays of characters representing the board
 *
 * Description: This function prints the chessboard using a two-dimensional
 * array of characters of size 8x8 representing the board. The board is printed
 * using the symbols ' ' (space) for empty squares, 'X' for black pieces, and
 * 'O' for white pieces.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < *; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
