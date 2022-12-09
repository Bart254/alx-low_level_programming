#include "main.h"

/**
 * array_range - creates an array integer with the specified range
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to this memory
 */
int *array_range(int min, int max)
{
	int e;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (e = 0; min <= max; e++, min++)
		ptr[e] = min;
	return (ptr);
}
