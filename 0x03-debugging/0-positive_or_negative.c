#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - entry point
 * Description: 'check for number if it is positive or negative'
 * Return: always 0
 * @n: n stands for number
 */
void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
