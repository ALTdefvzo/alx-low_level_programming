#include "main.h"
/**
 * _islower - checks if character is lowercase
 * @c: the character
 *  Return: 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
