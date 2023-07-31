#include "lists.h"

/**
 * free_listint - Freeing the listint_t list
 * @head: Pointss at the list thats being free
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}

