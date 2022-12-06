#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit - sets bit 1 at index
 * @n: pointer to number
 * @index: index
 *
 * Return: new int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	char *array;
	unsigned long int cp = *n;
	int e, size = 0;
	unsigned int i = 0;

	while (cp > 0)
	{
		size++;
		cp /= 2;
	}
	if (cp == 0)
		array = malloc((index + 2) * sizeof(char));
	else
		array = malloc((size + 1) * sizeof(char));
	if (array == NULL)
		return (-1);
	for (; *n == 0 && i <= index; ++i, ++size)
		array[i] = '0';
	if (*n != 0)
	{
		for (e = 0; e < size; *n = *n / 2, e++)
		{
			if (*n % 2 == 0)
				array[e] = '0';
			else if (*n % 2 == 1)
				array[e] = '1';
		}
	}
	array[e] = '\0';
	array[index] = '1';
	for (*n = 0, --size; size >= 0; --size)
	{
		if (array[size] == '0')
			*n = *n + (0 << size);
		else
			*n = *n + (1 << size);
	}
	free(array);
	return (*n);
}

