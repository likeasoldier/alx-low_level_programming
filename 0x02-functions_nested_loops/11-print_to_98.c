#include "main.h"
/* print_to_98.c */

#include <stdio.h>

/* Prints all natural numbers from n to 98 */
void print_to_98(int n)
{
	int i;

	/* Determine the direction of the count */
	int step = (n < 98) ? 1 : -1;

	/* Print the numbers from n to 98 */
	for (i = n; i != 98; i += step) {
	printf("%d, ", i);
	}

    /* Print the final number (98) */
	printf("%d\n", 98);
}
