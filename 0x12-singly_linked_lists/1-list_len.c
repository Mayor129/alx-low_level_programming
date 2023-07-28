#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns lenght of the number of elements
 * in a linked list in the program
 * @k: pointer to the list_t list of the code
 *
 * Return: number of elements in k
 */
size_t list_len(const list_t *k)
{
size_t n = 0;

while (k)
{
n++;
k = k->next;
}
return (n);
}
