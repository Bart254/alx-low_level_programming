#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - returns the bit value at index
 * @n: number
 * @index: index
 *
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *array;
	int bit;
	unsigned int e, size = 0, cp = n;

	/* determining the array size */
	while (cp > 0)
	{
		size++;
		cp /= 2;
	}
	/* create an array of size + 1 */
	array = malloc((size + 1) * sizeof(char));
	if (array == NULL)
		return (-1);
	/* fill the array */
	for (e = 0; e < size; n /= 2, e++)
	{
		switch (n % 2)
		{
			case 0:
				array[e] = '0';
				break;
			case 1:
				array[e] = '1';
				break;
			default:
				return (-1);
		}
	}
	array[e] = '\0';
	bit = (array[index] - '0');
	free(array);
	return (bit);
}

