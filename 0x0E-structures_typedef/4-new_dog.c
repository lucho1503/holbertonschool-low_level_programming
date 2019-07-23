#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - betty style entry point.
 * @name: name dog in struct.
 * @age: age dog in struct.
 * @owner: owner dog in struct.
 * Return: pointer to struct new.
 * Description: create a new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *l = NULL;
int k, i = 0, j = 0;
if (name == NULL || owner == NULL)
{
return (NULL);
}
while (name[i] != 0)
{
i++;
}
while (owner[j] != 0)
{
j++;
}
l = malloc(sizeof(struct dog));
if (l == NULL)
{
free(l);
return (NULL);
}
(*l).name = malloc(i + 1);
if ((*l).name == NULL)
{
free((*l).name);
free(l);
return (0);
}
(*l).owner = malloc(j + 1);
if ((*l).owner == NULL)
{
free((*l).owner);
free(l);
return (0);
}
for (k = 0; k < i; k++)
{
(*l).name[k] = name[k];
}
for (k = 0; k < j; k++)
{
(*l).owner[k] = owner[k];
}
(*l).age = age;
return (l);
}
