/**
 * int_index - searches for an integer
 * @array: arr of int
 * @size: size of the array
 * @comp: pointer to functions
 *
 * Return: index where a function call does not return 0
 */
int int_index(int *array, int size, int (*comp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	if (array && comp)
	{
		for (index = 0; index < size; index++)
		{
			if (comp(array[index]))
				return (index);
		}
		return (-1);
	}
	return (-1);
}

