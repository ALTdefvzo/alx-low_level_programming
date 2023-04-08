#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to integer
 * @s: string
 * Return: converted int
 */
int _atoi(char *s)
{
	int j = 0;
	int b = 0;
	int n = 0;
	int len = 0;
	int f = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;
	while (j < len && f == 0)
	{
		if (s[j] == '-')
			++b;
		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
					break;
				f = 0;
				}
				j++;
				}
			if (f == 0)
			return (0);
		return (n);
		}

/**
 * main - a program that multiplies two numbers.
 * @argc: argument counter
 * @argv: one dimensional array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int result, no1, no2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	no1 = _atoi(argv[1]);
	no2 = _atoi(argv[2]);
	result = no1 * no2;
	printf("%d\n", result);
	return (0);
}
