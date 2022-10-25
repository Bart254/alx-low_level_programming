#include "main.h"
/**
 * puts_half - Prints half of the string
 * @str: The argument passed
 */
void puts_half(char *str)
{
	int i, n, length_of_the_string;

	length_of_the_string = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	length_of_the_string++;
	if (length_of_the_string % 2 != 0)
	n = (length_of_the_string - 1) / 2;
	n = length_of_the_string / 2;
	}

	while (n <= length_of_the_string)
	{
	if (length_of_the_string % 2 != 0)
	{
	n = n + 2;
	}
	else
	{
	n = n + 1;
	}
	for ( ; n <= length_of_the_string; n++)
	{
	i = n - 1;
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
