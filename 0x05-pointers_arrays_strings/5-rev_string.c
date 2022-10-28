#include "main.h"
/**
 * print_rev - Prints the reverse of words
 * @s: The string supplied
 */
void rev_string(char *s)
{
	int i, b;

	b = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
	b++;
	}

	for ( ; b >= 0; b--)
	{
	_putchar(s[b]);
	}
	_putchar('\n');
}
