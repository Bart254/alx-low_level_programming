#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts binary to integers
 * @b: string with binary digits
 * Return: the unsigned intege
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, ls;
	int l;

	if (!b)
		return (0);
	l = strlen(b) - 1;
	for (ls = 0; l >= 0; ls++, l--)
	{
		if (b[l] != '1' && b[l] != '0')
		return (0);
		if (b[l] == '1')
		num += (1 << ls);
	}
	return (num);
}
