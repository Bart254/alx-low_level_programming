#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of the string
 * @str: The argument passed
 */
void puts_half(char *str)
{
	int e;
	int length = strlen(str);
	
	if (length % 2 == 0)
		e = length / 2;
	else
		e = (length - 1) / 2 + 1;
	while (e < length)
	{
		_putchar(*(str + e));
		e++;
	}
	_putchar('\n');
}
