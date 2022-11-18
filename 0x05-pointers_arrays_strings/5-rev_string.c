#include "main.h"
#include <string.h>

/**
 * print_rev - Prints the reverse of words
 * @s: The string supplied
 */
void rev_string(char *s)
{
	int e = strlen(s) - 1;

	while (e >= 0)
	{
		_putchar(*(s + e));
		e--;
	}
	
}
