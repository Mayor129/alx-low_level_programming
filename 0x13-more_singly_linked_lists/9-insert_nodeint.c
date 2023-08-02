#include "lists.h"

/**
 * insert_nodeint_at_index - the function to inserts a
 * new node in a linked list,
 * at a given position
 * @head: the pointer function to the first node in the list
 * @idx: the index where the new node is added after execution
 * @n: the table to inser data to insert in the new node
 *
 * Return: function to pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int y;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (y = 0; temp && y < idx; y++)
{
if (y == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}

return (NULL);
}
