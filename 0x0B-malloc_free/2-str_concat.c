#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: On success, a pointer to the concatenated string.
 *On error, NULL is returned.
 */
char *str_concat(char *s1, char *s2)
{
	char *ct;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	k = i + j + 1;
	ct = malloc(k * sizeof(char));
	if (ct == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		ct[l] = s1[l];
	for (l = 0; l < j; l++)
		ct[l + i] = s2[l];
	ct[i + j] = '\0';
	return (ct);
}
