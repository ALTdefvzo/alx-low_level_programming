#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated location of the string.
 * @str: the string
 * Return:pointer points to string(success),error when null is returned.
 */
char *_strdup(char *str)
{
	char *dupl;

	if (str == NULL)
	{
		return (NULL);
	}

	dupl = malloc(sizeof(char) * (strlen(str) + 1));
	if (dupl == NULL)
	{
		return (NULL);
	}
	strcpy(dupl, str);

	return (dupl);
}
