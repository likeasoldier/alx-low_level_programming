#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
	int sign = 1, num = 0, i = 0;

	while (s[i])
	{
	if (s[i] == '-')
	sign *= -1;
	else if (s[i] >= '0' && s[i] <= '9')
	num = num * 10 + (s[i] - '0');
	else if (num > 0)
	break;
	i++;
	}
	return (num * sign);
}
