#include "main.h"
/**
 * reverse_array - Reverses the array
 * @a: The array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int f, l, b, c;

	for (b = 0, c = n - 1; b < c; b++, c--)
	{
		f = a[b];
		l = a[c];

		a[b] = l;
		a[c] = f;
	}
}
