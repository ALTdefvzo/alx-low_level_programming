#include <unistd.h>

/**
 * _putchar - prints c to stdout
 * @c: the character 
 *
 * Return: returns 1 on success,on error -1 is returned
 */
int -putchar(char c)
{
  return (write(1, &c,  1));
}
