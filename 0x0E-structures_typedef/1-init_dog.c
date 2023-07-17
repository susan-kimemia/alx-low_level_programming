#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - variabless of type struct dog is init..
 * @owner: own person
 * @d: ptr
 * @age: how old
 * @name: naming
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->owner = owner;
d->name = name;
d->age = age;

}

