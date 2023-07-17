#include <stdlib.h>
#include "dog.h"

/**
 * _copy - copying the PASSED arg
 * @src: details to be copied
 * Return: PTR
 */

char *_copy(char *src)
{
int m;
int metre;
char *pp;
if (src == NULL)
{
return (NULL);

}
for (metre = 0; src[metre] != '\0'; metre++)
;

pp = malloc(sizeof(char) * (metre + 1));

if (pp == NULL)
{
return (NULL);
}
for (m = 0; src[m] != '\0'; m++)
{
pp[m] = src[m];
}
pp[m] = '\0';

return (pp);
}

/**
 * new_dog - var new dog
 * @name: nm
 * @age: aggee
 * @owner: owwwwwnerr
 * Return: poinnterRRR
 */

dog_t *new_dog(char *name, float age, char *owner)
{
char *newname;
char *newowner;
dog_t *s;

if (name == NULL || owner == NULL)
{

return (NULL);
}
s = malloc(sizeof(dog_t));
if (s == NULL)
{
return (NULL);
}
newname = _copy(name);
if (newname == NULL)
{
free(s);
return (NULL);
}
(*s).name = newname;
(*s).age = age;
newowner = _copy(owner);
if (newowner == NULL)
{
free((*s).name);
free(s);
return (NULL);
}
(*s).owner = newowner;
return (s);
}

