#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * @s: The string to be checked
 *
 * Return: 1 if @s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
		return (1);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome
 *
 * @s: The string to be checked
 * @start: The starting index of the substring to be checked
 * @end: The ending index of the substring to be checked
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);

	if (start >= end)
		return (1);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: The string to get the length of
 *
 * Return: The length of @s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
