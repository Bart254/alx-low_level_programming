#include <stdio.h>

/**
 * main - prints multiplies of 3 and 5 less than 1024
 * Return: 0 (Successful)
 */
int main(void)
{
	int n, sum;

	sum = 0;
	n = 0;

	while (n < 1024)
	{
		if (!(n % 3) || !(n % 5))
			sum += n;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
