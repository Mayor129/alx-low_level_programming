#include "lists.h"

/**
 * listint_len - the function that returns the number
 * of elements in a linked lists
 * @f: the variable linked list of type listint_t to traverse
 *
 * Return: Function to return  number of nodes
 */
size_t listint_len(const listint_t *f)
{
size_t num = 0;

while (f)
{
num++;
f = f->next;
}
return (num);
}
