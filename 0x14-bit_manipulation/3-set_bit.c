#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * set_uint_to_bin - converts unsigned int to binary
 * @n: number to be converted to bin
 * Return: pointer containing the bits
 */
char *set_uint_to_bin(unsigned long int n)
{
	unsigned long int e, l;
	char *ptr, character;

	ptr = malloc(65 * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	for (e = 0; e < 64; e++)
	{
		if (n != 0)
		{
			ptr[e] = n % 2 + '0';
			n /= 2;
		}
		else
			ptr[e] = '0';
	}
	ptr[e] = '\0';
	for (l = 63, e = 0; l > e; e++, l--)
	{
		character = ptr[e];
		ptr[e] = ptr[l];
		ptr[l] = character;
	}
	return (ptr);
}

/**
 * binary_to_uint - converts binary to integers
 * @b: string with binary digits
 * Return: the unsigned intege
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, ls;
	int l;

	if (!b)
		return (0);
	l = strlen(b) - 1;
	for (num = 0, ls = 0; l >= 0; --l, ls++)
	{
		if (b[l] != '1' && b[l] != '0')
		return (0);
		if (b[l] == '1')
		num += (1 << ls);
	}
	return (num);
}

/**
 * set_bit - sets 1 to an index
 * @n: number to be modified
 * @index: index to be set
 *
 * Program sets one to index displayed
 * Then changes the value of passed integer
 * Return: 1 if successful and -1 if unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	char *ptr;
	unsigned int l;

	ptr = set_uint_to_bin(*n);
	if (ptr == NULL)
		return (-1);
	l = strlen(ptr) - 1;
	while (index)
	{
		l--;
		index--;
	}
	ptr[l] = '1';
	*n = binary_to_uint(ptr);
	free(ptr);
	return (1);
}

