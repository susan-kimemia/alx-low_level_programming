#include "lists.h"

/**
 * listint_len - Print num of elements in a linked listint_t list
 * @h: ptr to the list
 *
 * Return: num of elements in the list
 */

size_t listint_len(const listint_t *h)
{
size_t checks = 0;

while (h != NULL)
{
checks++;
h = h->next;
}
return (checks);
}

