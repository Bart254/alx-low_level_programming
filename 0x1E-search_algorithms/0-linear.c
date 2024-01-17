#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first index of the array
 * @size: size of the array
 * @value: value to be searched
 *
 * Function returns an index of the value and prints the index being
 * searched alongside the value acquired for every iteration
 *
 * Return: first index where value is got otherwise -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
