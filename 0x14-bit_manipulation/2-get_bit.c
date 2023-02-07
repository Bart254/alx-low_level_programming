#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_bit - recovers the bit in a specified index
 * @n: number to be converted to bit
 * @index: index from where value is extracted
 * Return: value of bit at index, -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char bits[65];
	short int l, e;

	for (l = 63; l >= 0; l--)
	{
		if (n != 0)
		{
			bits[l] = n % 2 + '0';
			n /= 2;
		}
		else
			bits[l] = '0';
	}
	if (index > 63)
		return (-1);
	e = 63 - index;
	return (bits[e] - '0');
}

