#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - template betty.
 * @d: pointer to struct.
 * Description: frees all malloc call functios.
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
