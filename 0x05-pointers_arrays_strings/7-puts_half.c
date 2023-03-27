#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (*(str + len) != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	while ((str[n] != '\0'))
	{
		if (n == 0)
		{
			break;
		}
		_putchar((str[n]));
		n++;
	}

	_putchar('\n');
}
