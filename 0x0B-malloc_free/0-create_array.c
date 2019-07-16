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
unsigned int i;
if (size == '\0')
{
return ('\0');
}
p = malloc(size * sizeof(char));
if (p == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
*(p + i) = c;
}
return (p);
}
