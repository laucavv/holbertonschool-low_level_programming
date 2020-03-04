#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - free alloc_grid
 *@grid: array
 *@height: size
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
