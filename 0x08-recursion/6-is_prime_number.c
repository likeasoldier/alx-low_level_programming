#include "main.h"
/**
 * is_prime_number - checks if a given number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a given number is prime recursively
 * @n: the number to check
 * @div: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int check_prime(int n, int div)
{
	if (n <= 1)
	return (0);
	if (n % div == 0 && div != n)
	return (0);
	if (div == n)
	return (1);
	return (check_prime(n, div + 1));
}
