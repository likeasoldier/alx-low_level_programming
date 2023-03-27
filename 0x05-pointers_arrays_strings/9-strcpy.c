#include "main.h"
/**
 * _strcpy - Copies the string pointed to by sr,
 * to the buffer pointed to by dest.
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
