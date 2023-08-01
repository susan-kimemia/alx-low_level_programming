#include "lists.h"

/**
 * find_listint_loop - checks the loop in a linked list
 * @head: ptr to the first node of the list
 *
 * Return: An address of the node at the beginning of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *first = head;
listint_t *last = head;

if (head == NULL)
return (NULL);

while (last != NULL && first != NULL && first->next != NULL)
{
first = first->next->next;
last = last->next;

if (first == last)
{
last = head;
while (last != first)
{
last = last->next;
first = first->next;
}
return (first);
}
}

return (NULL);
}

