#include "lists.h"
#include <stdio.h>

/**
 * print_list - whole Elemntss of the args
 *
 * @h: PTR
 *
 * Return: t
 */
size_t print_list(const list_t *h)/* entry point */
{
size_t t = 0;
/* starting loop */
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
t++;/* itteration */
}
return (t);
}

