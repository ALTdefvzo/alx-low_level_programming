#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @cmp: pointer to compare values
 * Return: index of the first element
 *         -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j, result;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (j = 0; j < size; j++)
	{
		result = cmp(array[j]);
		if (result != 0)
			return (j);
	}
	return (-1);
}
