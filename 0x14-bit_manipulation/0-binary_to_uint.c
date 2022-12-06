#include <stddef.h>

/**
 * binary_to_uint - converts binary to integer
 * @b: string containing binary numbers
 *
 * Return: digit form of a binary
 */
unsigned int binary_to_uint(const char *b)
{
	int p, e = 0, l = 0;
	unsigned int d = 0;

	if (b == NULL)
		return (0);
	/* Determine length of a string to assign power value */
	while (*(b + e))
	{
		++l;
		++e;
	}
	p = --l;
	while (*b)
	{
		if (*b == '0')
			d += 0 << p;
		else if (*b == '1')
			d += 1 << p;
		else
			return (0);
		b++;
		--p;
	}
	return (d);
}
