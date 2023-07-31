#include "lists.h"

/**
 * add_nodeint - Add new node at the Beginning of a listint_t list
 * @head: Double PTR to list
 * @n: the new ints too be added in the node
 *
 * Return: the adress of the new element, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newwnode;
newwnode = malloc(sizeof(listint_t));

if (!newwnode)
return (NULL);
newwnode->n = n;
newwnode->next = *head;
*head = newwnode;

return (newwnode);
}

