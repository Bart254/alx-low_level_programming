#include <stdio.h>

/**
 * print_array - Prints int elements
 * @a: pointer
 * @n: variable
 */
void print_array(int *a, int n)
{
	int b = 0;

	for ( ; b < n; b++)
	{
		if (b == n - 1)
		{
			printf("%d", a[b]);
			break;
		}

		printf("%d, ", a[b]);
	}

	printf("\n");
}
