#include "main.h"
/**
 * print_rev - Prints the reverse of words
 * @s: The string supplied
 */
void print_rev(char *s)
{
	int i, a;

	a = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
	a++;
	}

	for ( ; a >= 0; a--)
	{
	_putchar(s[a]);
	}

	_putchar('\n');
}
