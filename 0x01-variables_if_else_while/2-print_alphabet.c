#include <stdio.h>
/**
*main - Entry point
*Derscriptio: 'alphabet'
*Return: always 0
*/
	int main()

{
	char letter = 'a';
	while (letter <= 'z') 
    {
	putchar(letter);
	letter++;
    }
	putchar('\n');
	return 0;
}
