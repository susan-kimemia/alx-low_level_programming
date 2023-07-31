#include "lists.h"

/**
 * add_nodeint_end - summing new node
 * @head: Double PTR to the list
 * @n: the new int Added in the node
 *
 * Return: the addres of  new element, NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newwnode, *temp;
newwnode = malloc(sizeof(listint_t));
if (newwnode == NULL)
return (NULL);
newwnode->n = n;
newwnode->next = NULL;

if (*head == NULL)
{
*head = newwnode;
return (newwnode);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = newwnode;

return (newwnode);
}

