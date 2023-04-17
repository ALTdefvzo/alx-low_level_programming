#include "dog.h"
/**
 * init_dog - Initializes a struct of type dog.
 * with the given values.
 * @d: A pointer to the dog struct to initialize.
 * @name: The name of the dog (a string).
 * @age: The age of the dog (a floating-point number)
 * @owner: The name of the dog's owner (a string).
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
