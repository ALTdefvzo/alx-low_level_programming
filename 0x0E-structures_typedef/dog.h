#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - information about dog
 * @name: The name of the dog (a string).
 * @age: The age of the dog (a floating-point number)
 * @owner: The name of the dog's owner (a string).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
