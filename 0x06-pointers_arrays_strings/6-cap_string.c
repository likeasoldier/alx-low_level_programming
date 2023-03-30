#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 'a' - 'A';

	for (i = 0; s[i] != '\0'; i++)
	{
		int j;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 'a' - 'A';
				break;
			}
		}
	}
	return (s);
}
