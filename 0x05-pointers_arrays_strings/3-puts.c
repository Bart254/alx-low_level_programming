#include "main.h"
/**
 * _puts - Prints the word stdout with a newline
 * @str: the words to print
 */
void _puts(char *str)
{
	int i = 0;

	for ( ; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
