#include <stdio.h>

/**
 * main - prints all combinations of 2 numbers
 * Return: (0) Successful
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a == b || (a * 10 + b) > (b * 10 + a))
				continue;
			putchar(a + '0');
			putchar(b + '0');
			if (a == 8 && b == 9)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
