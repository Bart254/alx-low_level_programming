#include "main.h"
#include <stdlib.h>
/**
* print_number - prints integers
* @n: number to be printed
*/
void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	}
	if (n == 0)
	{
	_putchar(0 + '0');
	}

	n = abs(n);

	if (n >= 1000)
	{
	_putchar((n / 1000) + '0');
	_putchar((n % 1000) / 100 + '0');
	_putchar((n % 100) / 10 + '0');
	}

	if (n >= 100)
	{
	_putchar(n / 100 + '0');
	_putchar((n % 100) / 10 + '0');
	}
	if (n >= 10)
	{
	_putchar(n / 10 + '0');
	}
	_putchar(n % 10 + '0');
	_putchar('\n');
}
