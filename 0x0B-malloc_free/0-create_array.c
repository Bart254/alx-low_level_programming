#include <stdlib.h>

/**
 * create_array - creates a string array with c
 * @size: the size of array
 * @c: character being loaded into the array
 * Return: The string with c
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int e;

	if (size == 0)
		return (NULL);
	s = malloc((size + 1) * sizeof(char));
	/* Returns null if malloc fails*/
	if (s == NULL)
		return (NULL);
	for (e = 0; e < size; e++)
		s[e] = c;
	return (s);
}
