#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array of integers
 * @width: The width of the array
 * @height: The height of the array
 * Return: on success, points to the 2D array
 * on errot, NULL is returned.
 */
int **alloc_grid(int width, int height)
{
	int **grd;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grd = malloc(sizeof(int *) * height);
	if (grd == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grd[i] = malloc(sizeof(int) * width);
		if (grd[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grd[j]);
			free(grd);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grd[i][j] = 0;
	}
	return (grd);
}
