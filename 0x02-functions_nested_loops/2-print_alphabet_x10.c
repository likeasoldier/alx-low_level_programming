#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10x using putchar
 * Return: Always 0
 */

void print_alphabet_x10(void)

{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		j++;
	}
}
