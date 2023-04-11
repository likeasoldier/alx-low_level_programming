#include "main.h"

/**
 * main - Entry point
 * @argc: The number of arguments passed
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int count = 0;

	(void)argv;

	while (argc--)
	count++;

	_putchar(count + '0');
	_putchar('\n');

	return (0);
}
