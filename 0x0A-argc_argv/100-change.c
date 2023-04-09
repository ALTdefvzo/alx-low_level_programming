#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prints the minimum number of coins for an amount of money
* @argc: argument counter
* @argv: argument variable
* Return: 0 if negative amount, 1 if amount not given
*/

int main(int argc, char *argv[])
{
	int m, coins = 0;

	if (argc != 2)
{
	printf("Error\n");
	return (1);
}
	if (argv[1][0] == '-')
{
	printf("0\n");
	return (0);
}
	m = atoi(argv[1]);
	coins += m / 25;
	m = m % 25;
	coins += m / 10;
	m = m % 10;
	coins += m / 5;
	m = m % 5;
	coins += m / 2;
	m = m % 2;
	coins += m / 1;
	printf("%d\n", coins);
	return (0);
}
