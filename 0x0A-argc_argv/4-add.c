#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - a program that adds positive numbers.
* @argc: number of arguments passed.
* @argv: argument pointers to strings.
*
* Return: 0 if no errors, else 1
*/
int main(int argc, char *argv[])
{
	int b = 0, k, u;

	for (k = 1; k < argc; k++)
{
	for (u = 0; argv[k][u]; u++)
{
	if (isdigit(argv[k][u]) == 0)
{
	puts("Error");
	return (1);
}
}
}
	for (k = 1; k < argc; k++)
{
	b += atoi(argv[k]);
}
	printf("%d\n", b);
	return (0);
}
