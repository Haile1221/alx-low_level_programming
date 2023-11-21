#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated for a 2D array.
 * @grid: The 2D array to be freed.
 * @height: The height dimension of the grid.
 *
 * Description: Frees the memory allocated for each row of the 2D array
 * and then frees the memory for the array of row pointers.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

