#include "lists.h"

/**
 * get_nodeint_at_index - the node at a certain index
 * in a linked list
 * @head: first node in linked list
 * @index: index of node returned
 *
 * Return: pointer to the node, or NULL if fail
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int checks = 0;
listint_t *temp = head;

while (temp && checks < index)
{
temp = temp->next;
checks++;
}

return (temp ? temp : NULL);
}

