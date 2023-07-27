#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: DOUBLE PTR 2 list_t list
 * @str: the t Str
 * Return: Address
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *t;
unsigned int lnggth = 0;
while (str[lnggth])
lnggth++;
t = malloc(sizeof(list_t));
if (!t)
return (NULL);
t->str = strdup(str);
t->len = lnggth;
t->next = (*head);
(*head) = t;
return (*head);
}

