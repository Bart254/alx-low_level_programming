#include "main.h"
/**
* print_diagonal - It prints a diagonal
* @n: dictates number of diagonals printed
*/
void print_diagonal(int n)
{
	int dashes, num_of_dashes;

	dashes = 0;
	num_of_dashes = 0;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for ( ; n > 0 ; n--)
	{
	for ( ; dashes > 0; dashes--)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	++num_of_dashes;
	dashes = num_of_dashes;
	}
	}
}
