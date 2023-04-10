#include "main.h"
#define NULL 0

/**
* _strpbrk - function that searches a string for any of a set of bytes
*  @s: string s
*  @accept: accepts s
*  Return: Always 0
*
*/

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
