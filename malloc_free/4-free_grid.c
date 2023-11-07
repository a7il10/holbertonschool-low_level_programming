#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid of the array to be freed
 * @height: height of the 2 dimansional array
 */

void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}
