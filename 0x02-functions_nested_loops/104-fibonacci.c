#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers
 * Return: 0 (Successful)
 */
int main(void)
{
	float a, b, c;

	int n = 96;

	a = 1;
	b = 2;

	printf("%.0f, %.0f, ", a, b);

	while (n > 0)
	{
		c = a + b;
		a = b;
		b = c;
		if (n == 1)
			printf("%.0f\n", c);
		else
			printf("%.0f, ", c);
		n--;
	}

	return (0);
}
