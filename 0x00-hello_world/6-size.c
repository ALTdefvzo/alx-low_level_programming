#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("The size of an char is: %lu.\n", (unsigned long)sizeof(a));
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(b));
	printf("The size of an long int is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of an long long int is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of an float is: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
