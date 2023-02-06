#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts binary to integers
 * @b: string with binary digits
 * Return: the unsigned intege
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, size, e, l, ls;
	char *rev;

	if (!b)
		return (0);
	size = strlen(b);
	rev = malloc((size + 1) * sizeof(char));
	if (rev == NULL)
		return (0);
	for (e = 0, l = size - 1; e < size; e++, l--)
		rev[e] = b[l];
	rev[e] = '\0';
	for (e = 0, ls = 0; rev[e]; e++, ls++)
	{
		if (rev[e] != '1' && rev[e] != '0')
		return (0);
		if (rev[e] == '1')
		num += (1 << ls);
	}
	return (num);
}
