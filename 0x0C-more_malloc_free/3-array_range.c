#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - entry point.
 * @min: where range inicializated.
 * @max: where range terminated.
 *
 * Return: pointer to first element to array.
 */

int *array_range(int min, int max)
{
int i;
int *l;
if (min > max)
{
return (NULL);
}
l = malloc((min + max + 1) * sizeof(int));
if (l == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
l[i] = i;
}
return (l);
}
