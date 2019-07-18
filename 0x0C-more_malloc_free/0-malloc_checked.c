#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - entry point.
 * @b: size of malloc.
 * Return: pointer to first element of malloc.
 */

void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
