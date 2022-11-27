#include "main.h"

/**
 * print_number - The program prints numbers
 * @n: number to be printed
 *
 */
void print_number(int n)
{
	int reverse;

	if (n == 0)
		_putchar(0 + '0');
	/* reverses number */
	else
	{
		for (reverse = 0; n != 0; n /= 10)
			reverse = (reverse * 10) + (n % 10);
		/* prints the reversed number a digit at a time from the last digit */
		if (reverse < 0)
		{
			_putchar('-');
			reverse = 0 - reverse;
		}
		while (reverse > 0)
		{
			_putchar((reverse % 10) + '0');
			reverse /= 10;
		}
	}
}
