#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (argc--)
	{
	count++;
	argv++;
	}

	printf("%d\n", count);

	return (0);
}
