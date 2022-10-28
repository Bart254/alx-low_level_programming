#include "main.h"

/**
 * string_toupper - Prints the uppercase of the argument
 * @s: The argument passed
 * Return: The uppercase
 */
char *string_toupper(char *s)
{
	int n = 0;

	for ( ; s[n] != '\0'; n++)
	{
		if (s[n] > 96 && s[n] < 123)
			s[n] = s[n] - 32;
	}
	_putchar('\n');

	return (s);
}
