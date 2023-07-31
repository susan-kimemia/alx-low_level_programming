#include "lists.h"

/**
 * pop_listint - Delete head node of a listint_t linked list
 * @head: Double pointer to the first element in the list
 *
 * Return: the Head node data or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
int content;
listint_t *temp;

if (!*head || !head)
return (0);

content = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (content);
}

