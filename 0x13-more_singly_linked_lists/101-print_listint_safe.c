#include "lists.h"

/**
 * print_listint_safe - printt listint_t linked list
 * @head: PTR to the first node in the list
 *
 * Return: namba of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
size_t checks = 0;
size_t recent;
const listint_t *temp = NULL;
const listint_t *rel = NULL;

temp = head;
while (temp != NULL)
{
printf("[%p] %d\n", (void *)temp, temp->n);
checks++;
temp = temp->next;
rel = head;
recent = 0;
while (recent < checks)
{
if (temp == rel)
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
return (checks);
}
rel = rel->next;
recent++;
}

if (head == NULL)
exit(98);
}
return (checks);
}

