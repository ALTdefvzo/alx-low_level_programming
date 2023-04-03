#include "main.h"
/**
* _strspn -  function that gets the length of a prefix substring
* @s: String s
* @accept: target to match
* Return: Always 0 (success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (r = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (n);
		}
		a++;
	}
	return (n);
}
