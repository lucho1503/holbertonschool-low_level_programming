#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - entry point _realloc is function of betty style.
 * @ptr: pointer to old_size.
 * @old_size: size in bytes of space allocated for ptr.
 * @new_size: new size of blocks on memory in bytes.
 * Return: pointer to new_size or NULL if not met.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	else
		for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (p);
}
