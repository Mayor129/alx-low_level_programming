#include "lists.h"

/**
 * free_listint_safe - the function to frees a linked list ina code
 * @h: the function of a pointer to the first node in the linked list
 *
 * Return: the function to return the  number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t lenz = 0;
int diffz;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
diffz = *h - (*h)->next;
if (diffz > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
lenz++;
}
else
{
free(*h);
*h = NULL;
lenz++;
break;
}
}

*h = NULL;

return (lenz);
}
