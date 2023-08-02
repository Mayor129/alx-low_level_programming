#include "lists.h"

/**
 * add_nodeint - the function to add a new node at the
 * beginning of a linked list
 * @head: the pointer head to add the first node in the list
 * @f: the data variable to insert data into that new node
 *
 * Return: the Function to return pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int f)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->f = f;
new->next = *head;
*head = new;

return (new);
}