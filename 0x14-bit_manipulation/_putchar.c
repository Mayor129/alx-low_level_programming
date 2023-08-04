#include "main.h"
#include <unistd.h>
/**
 * _putchar - the function that writes the character c to stdout
 * @c: The value character to print out
 *
 * Return: funftion to return 1 on  success 
 * while On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
