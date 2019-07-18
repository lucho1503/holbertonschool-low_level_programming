#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	
	unsigned int *p;

	p = malloc(sizeof(b));
	
	if (p == NULL)
		{
			return ('\0');
		}
	
	return (p);
}
