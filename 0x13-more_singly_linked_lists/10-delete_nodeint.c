#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node in a linked list
 * @head: pointer to first element in the list
 * @index: index of the node deleted
 *
 * Return: one, or -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *recent = NULL;
unsigned int checks = 0;

if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (checks < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
checks++;
}

recent = temp->next;
temp->next = recent->next;
free(recent);
return (1);
}

