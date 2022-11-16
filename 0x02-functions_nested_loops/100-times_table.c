#include "main.h"

/**
 * print_times_table - prints the time table of n
 * @n: integer timestable
 */
void print_times_table(int n)
{
	int a, b, s;

	if (n < 0 || n > 15);
	else
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (a * b > 99)
				{
					_putchar((a * b) / 100 + '0');
					_putchar(((a * b) % 100) / 10 + '0');
				}
				else if (a * b > 9)
					_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
				if (b == n)
					continue;
				_putchar(',');
				if (a * (b + 1) > 99)
					s = 1;
				else if (a * (b + 1) > 9)
					s = 2;
				else
					s = 3;
				for (; s > 0; s--)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

