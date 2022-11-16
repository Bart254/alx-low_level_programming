#include <stdio.h>

/**
 * main - prints the first 50 fibonacci sequence
 * Return: 0 (Successful)
 */
int main(void)
{
	long int a, b, sum;

	int counter;

	a = 1;
	b = 2;

	printf("%ld, %ld, ", a, b);

	for (counter = 2, sum = 0; counter < 50; counter++)
	{
		sum = a + b;
		if (counter == 49)
			printf("%ld\n", sum);
		else
			printf("%ld, ", sum);
		a = b;
		b = sum;
	}
	return (0);
}
