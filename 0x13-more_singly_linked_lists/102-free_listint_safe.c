#include "lists.h"

/**
 * free_listint_safe - free listint_t list
 * @h: ptr to the 1st node of the list
 *
 * Return: free Size of the list
 */

size_t free_listint_safe(listint_t **h)
{
size_t checks = 0;
int rel;
listint_t *temp;
if (h == NULL || *h == NULL)
return (0);

while (*h != NULL)
{
rel = *h - (*h)->next;
if (rel > 0)
{
temp = (*h)->next;

free(*h);
*h = temp;
checks++;
}
else
{
free(*h);
temp = NULL;
checks++;
break;
}
}

*h = NULL;
return (checks);
}

