#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * uint_to_bin - converts unsigned int to binary
 * @n: number to be converted to bin
 * Return: pointer containing the bits
 */
char *uint_to_bin(unsigned long int n)
{
	unsigned long int size, e, l, cp;
	char *ptr, character;

	if (n == 0)
		size = 1;
	else
	{
		for (cp = n, size = 0; cp > 0; cp /= 2)
			size++;
	}
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	for (e = 0; e < size; e++, n /= 2)
		ptr[e] = n % 2 + '0';
	ptr[e] = '\0';
	for (l = size - 1, e = 0; l > e; e++, l--)
	{
		character = ptr[e];
		ptr[e] = ptr[l];
		ptr[l] = character;
	}
	return (ptr);
}

/**
 * get_bit - recovers the bit in a specified index
 * @n: number to be converted to bit
 * @index: index from where value is extracted
 * Return: value of bit at index, -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *ptr, bit;
	unsigned int l;

	ptr = uint_to_bin(n);
	if (ptr == NULL)
		return (-1);
	if (index >= strlen(ptr))
		return (-1);
	l = strlen(ptr) - 1;
	while (index > 0)
	{
		l--;
		index--;
	}
	bit = ptr[l] - '0';
	free(ptr);
	return (bit);
}

