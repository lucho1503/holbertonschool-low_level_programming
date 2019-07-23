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
struct dog *new_dog;
int i = 0, j = 0;
if (name == NULL || owner == NULL)
{
return (NULL);
}
while (name[i])
{
i++;
}
while (owner[j])
{
j++;
}
new_dog = malloc(sizeof(struct dog));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = malloc((i + 1) * sizeof(char));
if (new_dog->name == NULL)
{
free(new_dog->name);
return (0);
}
new_dog->owner = malloc((j + 1) * sizeof(char));
if (new_dog->owner == NULL)
{
free(new_dog->owner);
free(new_dog);
return (0);
}
for (i = 0; name[i]; i++)
{
new_dog->name[i] = name[i];
}
for (j = 0; owner[j]; j++)
{
new_dog->owner[j] = owner[j];
}
new_dog->age = age;
return (new_dog);
}
