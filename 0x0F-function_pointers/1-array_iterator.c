#include <stdlib.h>

/**
 * array_iterator - sends array elements as parameters to functions
 * @array: array
 * @size: size of array
 * @action: function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int e;

	if (array && action)
	{
		for (e = 0; e < size; e++)
		{
			action(array[e]);
		}
	}
}

