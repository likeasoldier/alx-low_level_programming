#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Derscriptio: 'check for number if last number is 16'
*Return: always 0
*/

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d and is not 0\n", n, ld);
	else if (ld < 6)
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, ld);
	return (0);
}
