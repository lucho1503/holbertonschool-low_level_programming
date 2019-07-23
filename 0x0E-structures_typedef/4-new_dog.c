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
	dog_t *new_dog = malloc(sizeof(dog_t));
	int i = 0, j = 0;
	if (new_dog == NULL)
	{
		return (new_dog);
	}
	while (name[i])
	{
		i++;
	}
	while (owner[j])
	{
		j++;
	}
	new_dog->name = malloc((i + 1) * sizeof(char));
	new_dog->owner = malloc((j + 1) * sizeof(char));
	if (new_dog->owner == NULL || new_dog->name == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		new_dog->name[i] = name[i];
	}
	for (j = 0; owner[j]; j++)
	{
		new_dog->owner[j] = owner[j];
	}
	new_dog->name[i] = 0;
	new_dog->owner[j] = 0;
	new_dog->age = age;
	return (new_dog);
}
