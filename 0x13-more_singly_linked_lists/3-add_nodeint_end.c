#include "lists.h"

/**
 * add_nodeint_end - the Fubctions to  adds a node at the end of a linked list
 * @head: the pointer to the first element in the list
 * @f: the data variable to insert in the new element
 *
 * Return: the function to point the pointer to the new node,
 * or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int f)
{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->f = f;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
