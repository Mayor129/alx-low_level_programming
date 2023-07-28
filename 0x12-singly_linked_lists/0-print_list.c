#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list in the code
 * @j: pointer to the list_t list to print in the code program
 *
 * Return: the number of nodes printed in the code
 */
size_t print_list(const list_t *j)
{
size_t s = 0;

while (j)
{
if (!j->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", j->len, j->str);
j = j->next;
s++;
}

return (s);
}

