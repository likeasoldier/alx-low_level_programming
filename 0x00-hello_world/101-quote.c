#include <stdio.h>
#include <unistd.h>
/**
 * main-  a C program that prints exactly and that piece of art is useful
 * Dora Korpar, 2015-10-19, followed by a new line, to the standard error
 * Return: 1 (Success)
*/
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(&err, sizeof(char), 59, stderr);

	return (1);
}
