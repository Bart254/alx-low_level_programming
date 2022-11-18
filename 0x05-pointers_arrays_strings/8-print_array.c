#include <stdio.h>

/**
 * print_array - Prints int elements
 * @a: pointer
 * @n: variable
 */
void print_array(int *a, int n)
{
	while (n > 0)
	{
		if ( n == 1)
		{
			printf("%d", *a);
			break;
		}

		printf("%d, ", *a);
		a++;
		n--;
	}

	printf("\n");
}
