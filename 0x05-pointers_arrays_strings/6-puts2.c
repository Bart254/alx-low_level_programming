#include "main.h"
/**
 * puts2 - Prints every second digit
 * @str: The string argument passed
 */
void puts2(char *str)
{
	int i = 0;

	for ( ; str[i] != '\0'; i++)
	{
	if (i % 2 == 0)
	_putchar(str[i]);
	}
	_putchar('\n');
}
