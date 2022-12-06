#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary value of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int one = 1, bit = 0;
	int p = 0;

	/* checks where our binary will begin */
	if (n == 0)
		_putchar('0' + 0);
	else
	{
		while (n > bit)
		{
			++p;
			bit = one << p;
		}
		if (n != (one << p))
			--p;
		_putchar('1' + 0);
		n -= (one << p);
		for (--p; p >= 0; --p)
		{
			bit = one << p;
			if (n == 0)
				_putchar('0' + 0);
			else if (n >= bit)
			{
				_putchar('1' + 0);
				n -= bit;
			}
			else
				_putchar('0' + 0);
		}
	}
}
