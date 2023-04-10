#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int k;


	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[a] = src[k];
		a++;
		k++;
	}


	dest[a] = '\0';
	return (dest);
}
