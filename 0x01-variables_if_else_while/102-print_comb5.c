#include <stdio.h>

/**
 * main - print combinations of two 2 numbers
 * Return: 0 (successful)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b < 10; b++)
	{
	for (c = 0; c < 10; c++)
	{
	for (d = 0; d < 10; d++)
	{
	if (a * 10 + b < c * 10 + d)
	{
	putchar(a + '0');
	putchar(b + '0');
	putchar(' ');
	putchar(c + '0');
	putchar(d + '0');

	if (a == 9 && b == 8)
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
	}
	return (0);
}
