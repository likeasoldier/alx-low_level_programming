#include"main.h"
/**
 * _sqrt_check - checks for the square root of a number
 * @n: the number to find the square root of
 * @sqrt: the square root estimate
 *
 * Return: the square root, or -1 if not found
 */
int _sqrt_check(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);
	else if (sqrt * sqrt > n)
		return (-1);
	else
		return (_sqrt_check(n, sqrt + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_check(n, 0));
}
