#include "main.h"

/* _isupper.c */

int _isupper(int c);

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
