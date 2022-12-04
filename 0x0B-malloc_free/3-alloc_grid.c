#include <stdlib.h>

/**
 *  alloc_grid - returns the pointer to 2-array dimension
 *  @width: row
 *  @height: column
 *
 *  Return: pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int r, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (r = 0; r < height; r++)
	{
		array[r] = malloc(width * sizeof(int));
		if (array[r] == NULL && r == 0)
		{
			free(array);
			return (NULL);
		}
		else if (array[r] == NULL && r > 0)
		{
			for (--r; r >= 0; r--)
			{
				free(array[r]);
			}
			free(array);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			array[r][c] = 0;
	}
	return (array);
}
