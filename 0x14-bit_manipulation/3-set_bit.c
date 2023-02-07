#include "main.h"
#include <string.h>

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
	unsigned long int new_n, cp = *n;
	char bits[65];
	short int l, e, ls;

	for (l = 63; l >= 0; l--)
	{
		if (cp)
		{
			bits[l] = cp % 2 + '0';
			cp /= 2;
		}
		else
			bits[l] = '0';
	}
	if (index > 63)
		return (-1);
	e = 63 - index;
	bits[e] = '1';
	for (ls = 0, l = 63, new_n = 0; l >= 0; l--, ls++)
	{
		if (bits[l] == '1')
			new_n += (1 << ls);
	}
	*n = new_n;
	return (1);
}

