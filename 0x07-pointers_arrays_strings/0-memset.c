#include "main.h"

/**
 *  _memset - fill a memory block with a constant value
 *  @s: pointer to starting address
 *  @b: constant value
 *  @n: n value to be filled 
 *  Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; i++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
