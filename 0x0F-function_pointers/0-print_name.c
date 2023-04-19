#include "function_pointer.h"

/**
 * print_name - a function that prints a name.
 * @name: the name to print 
 * @f: function to print 
 * Return: void(nothing)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL &&  f != NULL)
		f(name);
}
