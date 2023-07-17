#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees mem...
 * @d: ptr 2 freeing ALLOCATED MEMORY
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);

free(d->owner);

free(d);
}
}

