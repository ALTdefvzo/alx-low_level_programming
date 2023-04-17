#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the contents of a dog struct
 * @d: pointer to the struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age ? d->age : 0);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
