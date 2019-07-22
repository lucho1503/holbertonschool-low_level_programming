#include "dog.h"
#include <stdio.h>

/**
 * init_dog - entry point.
 * @d: pointer to struct.
 * @name: type of variable name.
 * @age: type of variable dog.
 * @owner: type of variable owner.
 * Descrition: initialize variable type dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
