#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int s1_len = 0, s2_len = 0, i, j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[s1_len])
	s1_len++;
	while (s2[s2_len])
	s2_len++;

	concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (concat_str == NULL)
	return (NULL);

	for (i = 0; s1[i]; i++)
	concat_str[i] = s1[i];
	for (j = 0; s2[j]; j++)
	concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';
	return (concat_str);
}
