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
int i = 0;
int *l;
int m;
if (min > max)
{
return (NULL);
}
m = max - min;
l = malloc((m + 1) * sizeof(int));
if (l == NULL)
{
return (NULL);
}
for (i = min; i <= m; i++)
{
l[i] = min;
min++;
}
return (l);
}
