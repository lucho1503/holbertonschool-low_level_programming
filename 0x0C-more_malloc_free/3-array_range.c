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
int m;
if (min > max)
{
return ('\0');
}
m = max - min;
l = malloc((m + 1) * sizeof(int));
if (l == NULL)
{
return ('\0');
}
for (i = min; i <= m; i++)
{
l[i] = min;
min++;
}
return (l);
}
