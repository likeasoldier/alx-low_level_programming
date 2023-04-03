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
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
			if (col == 7)
				_putchar('\n');
		}
	}
}
