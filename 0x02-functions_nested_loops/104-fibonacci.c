#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers
 * Return: 0 (Successful)
 */
int main(void)
{
	long int a, b, c;

	int n = 96;

	a = 1;
	b = 2;

	printf("%ld, %ld, ", a, b);

	while (n > 0)
	{
		c = a + b;
		a = b;
		b = c;
		if (n == 1)
			printf("%ld\n", c);
		else
			printf("%ld, ", c);
		n--;
	}

	return (0);
}
