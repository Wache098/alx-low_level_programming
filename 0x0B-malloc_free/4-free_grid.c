#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid-frees a 2-d grid that had been created
 *
 * @grid:2 dimensional grid input
 *
 * @height:input array
 *
 * Return:NULL on failure
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
