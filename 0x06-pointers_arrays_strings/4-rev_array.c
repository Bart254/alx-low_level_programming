#include "main.h"
/**
 * reverse_array - Reverses the array
 * @a: The array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	for (n = n - 1; n >= 0; n--)
	{
		if (n == 0)
		_putchar(a[0] + '0');
		else
		{
		if (a[n] > 999)
		{
		_putchar(a[n] / 1000 + '0');
		_putchar((a[n] % 1000) / 100 + '0');
		_putchar((a[n] % 100) / 10 + '0');
		_putchar((a[n] % 10) + '0');
		}
		else if (a[n] > 99)
		{
		_putchar(a[n] / 100 + '0');
		_putchar((a[n] % 100) / 10 + '0');
		_putchar(a[n] % 10 + '0');
		}
		else if (a[n] > 9)
		{
		_putchar(a[n] / 10 + '0');
		_putchar(a[n] % 10 + '0');
		}
		else
		_putchar(a[n] % 10 + '0');
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
}
