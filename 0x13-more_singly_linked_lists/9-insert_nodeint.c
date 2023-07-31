#include "lists.h"

/**
 * insert_nodeint_at_index - Insert new node at specific position
 * @head: pointer to the first node of the list
 * @idx: the ndex of the list where the new node is added
 * @n: data to put in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int checks = 0;
listint_t *newwnode, *temp;

if (head == NULL)
return (NULL);

newwnode = malloc(sizeof(listint_t));
if (newwnode == NULL)
return (NULL);

newwnode->n = n;
newwnode->next = NULL;
if (idx == 0)
{
newwnode->next = *head;
*head = newwnode;
return (newwnode);
}

temp = *head;
while (temp != NULL && checks < idx - 1)
{
temp = temp->next;
checks++;
}
if (temp == NULL)
{
free(newwnode);
return (NULL);
}

newwnode->next = temp->next;
temp->next = newwnode;
return (newwnode);
}

