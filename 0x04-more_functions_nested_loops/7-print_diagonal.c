#include "main.h"
/**
* print_diagonal - Prints a diagonal line
*@n: number of times it is printed
*/
void print_diagonal(int n)
{
	int dash, ndash;

	dash = 0;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for ( ; n > 0; n--)
	{
	_putchar('\\');
	_putchar('\n');
	dash++;
	for (ndash = dash; ndash > 0; ndash--)
	{
	_putchar(' ');
	}
	}
	}
}
