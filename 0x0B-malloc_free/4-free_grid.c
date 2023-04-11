#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free memory from previous 2D grid created
 * @grid: points to 2D grid to be freed
 * @height:height of the 2D grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
