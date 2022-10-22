#include "main.h"
/**
* print_square - Prints the hash sign
* @size: number of hashes printed
*/
void print_square(int size)
{
	int number_in_row = size;

	int controller = size;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for ( ; size > 0; size--)
	{
	for ( ; number_in_row > 0; number_in_row--)
	{
	_putchar('#');
	}
	_putchar('\n');
	number_in_row = controller;
	}
	}
}
