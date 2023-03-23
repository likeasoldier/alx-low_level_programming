#include "main.h"

/**
 * _isupper - entry point
 * @c: get a  letter
 * Return: if successful 1 if not 0
*/


/* Check if a character is uppercase */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1); /* Character is uppercase */
	}
	else
	{
	return (0); /* Character is not uppercase */
	}
}
