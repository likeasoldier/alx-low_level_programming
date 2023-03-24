#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	long int factor = 2;

	while (num > factor)
	{
	if (num % factor == 0)
		num /= factor;
	else
		factor++;
	}

	printf("%ld\n", factor);
	return (0);
}
