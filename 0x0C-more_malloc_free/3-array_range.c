#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: the minimum value.
 * @max: the maximum value.
 * Return: pointer to the newly created array, or NULL if failed
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ary, j, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	ary = malloc(sizeof(int) * size);

	if (ary == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
		ary[j] = min + j;


	return (ary);
}
