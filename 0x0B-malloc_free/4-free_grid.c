#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously
 * created by my alloc_grid function
 * @grid: the grid
 * @height: the height
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		i++;
	{
		free(grid[i]);
	}
	free(grid);
}
