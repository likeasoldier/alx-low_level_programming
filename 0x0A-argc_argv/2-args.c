#include "main.h"

/**
 * main - Entry point. Prints all arguments it receives.
 *
 * @argc: Number of arguments passed to the program.
 * @argv: Array of strings containing the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
	_puts(argv[i]);
	_putchar('\n');
	}

	return (0);
}
