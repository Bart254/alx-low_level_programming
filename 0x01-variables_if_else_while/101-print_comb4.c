#include <stdio.h>

/**
 * main - prints possible combinations of 3 numbers
 * Return: 0 (successful)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (a < b && a < c && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a == 7 && b == 8)
					{
						putchar('\n');
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
