#include "main.h"
/**
* print_triangle - prints a triangle
* @size: the size of triangle
*/
void print_triangle(int size)
{
	int num_dashes = size - 1;
	int a = num_dashes;
	int num_hashes = 1;
	int b = 1;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for ( ; num_hashes <= size; num_hashes++)
	{
	for ( ; num_dashes > 0; num_dashes--)
	{
	_putchar(' ');
	}
	_putchar('#');
	for ( ; a + b < size; b++)
	{
	_putchar('#');
	}
	_putchar('\n');
	a--;
	b = 1;
	num_dashes = a;
	}
	}
}
