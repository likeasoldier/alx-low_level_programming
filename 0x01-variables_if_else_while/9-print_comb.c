#include <stdio.h>
/**
*main - entry point
*Description: 'print alphabet'
*Return: 0
*/

int main(void)

{
	int i, j;

	for (i = 0; i < 10; ++i)
	{
		for (j = i; j < 10; ++j)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
