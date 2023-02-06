#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints a binary number
 * @n: number
 *
 * The program prints the binary value of a number
 */
void print_binary(unsigned long int n)
{
	unsigned long int q, r;

	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}
	q = n >> 1;
	r = n - 2 * q;
	if (n == 1)
	{
		_putchar(1 + '0');
		return;
	}
	print_binary(q);
	_putchar(r + '0');
}
