#include "lists.h"

/**
 * print_listint - prints all Elements of a listint_t list
 * @h: ptr to the list to be printed
 *
 * Return: Num of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t check = 0;

while (h != NULL)
{
printf("%d\n", h->n);
check++;
h = h->next;
}
return (check);
}

