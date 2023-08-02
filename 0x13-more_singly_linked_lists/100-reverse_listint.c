#include "lists.h"

/**
 * reverse_listint - the function to  reverses a linked list in the code
 * @head: the pointer that direct to the first node in the list
 *
 * Return: the pointer to the first node in the new list of the program
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;

return (*head);
}
