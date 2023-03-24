#include "main.h"

/**
 * print_square - prints a square of a given size
 * @size: size of the square
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < sixe; col++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
