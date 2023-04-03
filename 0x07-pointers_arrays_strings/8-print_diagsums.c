#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of integers
 * @a: the square matrix of integers
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
	sum1 += *(a + i);
	}
	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
	sum2 += *(a + i);
	}
	char buf[30];

	itoa(sum1, buf, 10);
	write(1, buf, strlen(buf));
	write(1, "\n", 1);
	itoa(sum2, buf, 10);
	write(1, buf, strlen(buf));
	write(1, "\n", 1);
}
