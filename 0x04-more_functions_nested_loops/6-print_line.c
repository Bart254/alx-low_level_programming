#include "main.h"
/**
* print_line - Prints a line
* @n: dictates how many times underscore is printed
*/
void print_line(int n)
{
	while (n > 0)
	{
	_putchar('_');
	n--;
	}

	_putchar('\n');
}
