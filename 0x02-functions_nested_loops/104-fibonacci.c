#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers
 * Return: 0 (Successful)
 */
int main(void)
{
	long int a, b, c;

	int n = 98;

	a = 1;
	b = 2;
	c = 0;


	while (n > 0)
	{
		if (c == a + b)
		{
			a = b;
			b = c;
			if (n == 1)
				printf("%ld\n", c);
			else
				printf("%ld, ", c);
			n--;
		}
		c++;
	}
	return (0);
}

