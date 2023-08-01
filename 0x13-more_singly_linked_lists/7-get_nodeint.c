#include "lists.h"

/**
 * get_nodeint_at_index - the function that returns the node at a
 * certain index in a linked list
 * @head: head of the first node in the linked list
 * @index: the index of the node to return on execution
 *
 * Return: the function pointer to the node to be worked on, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int y = 0;
listint_t *temp = head;

while (temp && y < index)
{
temp = temp->next;
y++;
}

return (temp ? temp : NULL);
}
