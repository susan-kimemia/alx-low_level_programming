#include "lists.h"

/**
 * sum_listint - sum of all the n of a listint_t linked list
 * @head: pointer 2 the first node of the linked list
 *
 * Return: sum of all the n of listint_t linked list
 * or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
int added = 0;
listint_t *temp;

if (head == NULL)
return (0);

temp = head;
while (temp != NULL)
{
added += temp->n;
temp = temp->next;
}

return (added);
}

