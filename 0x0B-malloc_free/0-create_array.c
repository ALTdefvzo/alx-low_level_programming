#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of characters.
 * @size: Array size to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		ar[j] = c;
	}
	return (ar);
}
