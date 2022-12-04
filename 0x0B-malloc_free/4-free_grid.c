#include <stdlib.h>

/**
 * free_grid - frees the memory of a 2 dimensional array of int
 * @grid: array pointer
 * @height: row of array
 */
void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
		free(*(grid + r));
	free(grid);
}
