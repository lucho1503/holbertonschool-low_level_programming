#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - entry point.
 * @size: size of array.
 * @c: character special.
 * Return: pointer to matriz.
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
else
{
p = malloc(size * sizeof(char));
for (; i < size; i++)
{
p[i] = c;
}
}
return (p);
}
