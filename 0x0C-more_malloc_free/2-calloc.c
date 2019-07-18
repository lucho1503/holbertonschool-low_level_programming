#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - entry point.
 * @nmemb: number bytes in memory.
 * @size: the size of the memory to print.
 *
 * Return: pointer to first element to array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *p;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(size * nmemb);
if (p == NULL)
{
free(p);
return ('\0');
}
for (i = 0; i < (size * nmemb); i++)
{
p[i] = 0;
}
return (p);
}
