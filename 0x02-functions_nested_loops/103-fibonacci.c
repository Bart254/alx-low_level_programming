#include <stdio.h>

/**
 * main - adding even numbers of fibonacci
 * Return: 0 (successful)
 */
int main(void)
{
	long int a, b, sum, sum_even;

	a = 1;
	b = 2;
	sum = 0;
	sum_even = 2;

	while (sum <= 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (b % 2 == 0)
			sum_even += b;
	}
	printf("%ld\n", sum_even);
	return (0);
}
