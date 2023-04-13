#include "main.h"
#include <stdlib.h>
/**
 * * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory
 * If nmemb or size is 0, then it returns NULL
 * If malloc fails, then it returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int j;
	size_t total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	ar = malloc(total_size);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < total_size; j++)
	{
		ar[j] = 0;
	}
	return (ar);
}
