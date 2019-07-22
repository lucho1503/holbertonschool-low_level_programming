#include "dog.h"
#include <stdio.h>

/**
 * print_dog - entry point.
 * @d: pointer to struct.
 * Description: print dates to dog.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
			{
				printf("Name:%s\n", d->name);
			}
		printf("Age: %01f\n", d->age);
		if (d->owner == NULL)
		{
			printf("(nil)");
		}
		else
			{
				printf("Owner:%s\n", d->owner);
			}
	}
}
