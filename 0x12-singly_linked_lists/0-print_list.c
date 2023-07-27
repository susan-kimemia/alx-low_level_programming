#include <stdio.h>
#include "lists.h"
/**
 * print_list - whole Elemntss of the args
 * @h: PTR
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
size_t t = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
t++;
}
return (t);
}

