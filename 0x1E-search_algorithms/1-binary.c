#include "search_algos.h"
#include <stdio.h>

/**
 * search_array - prints the array being searched in the loop
 * @low: the lowest index
 * @high: the highest index
 */
void search_array(int low, int high)
{
	printf("Searching in array: ");
	while (low <= high)
	{
		printf("%d", low);
		if (low == high)
			printf("\n");
		else
			printf(", ");
		low++;
	}
}

/**
 * binary_search - searches for a number in a sorted array using binary search
 * @array: pointer to the first array index
 * @size: size of the array
 * @value: value to be searched
 *
 * The array is sorted in ascending order and a binary search algorithm
 * used. The function prints the search space for every iteration
 *
 * Return: index where value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int high, low, mid;

	if (!array)
		return (-1);
	for (high = size - 1, low = 0; low <= high;)
	{
		search_array(low, high);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
