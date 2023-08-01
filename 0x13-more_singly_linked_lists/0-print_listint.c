#include "lists.h"

/**
 * print_listint - The function thats  prints all the elements of a linked list
 * @g: this is the linked list of type listint_t to print
 *
 * Return: the function return the number of nodes
 */
size_t print_listint(const listint_t *g)
{
size_t num = 0;

while (g)
{
printf("%d\n", g->f);
num++;
g = g->next;
}

return (num);
}
