#include "main.h"

/**
 * _puts - Prints the word stdout with a newline
 * @str: the words to print
 */
void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
