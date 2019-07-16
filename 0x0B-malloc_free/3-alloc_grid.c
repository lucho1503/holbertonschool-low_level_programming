#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - entry point.
 * @width: width of array or columns.
 * @height: height of array or rows.
 * Return: pointer to array bidimensional.
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **p;
if (width <= 0 || height <= 0)
{
return ('\0');
}
p = malloc(height * sizeof(int *));
if (p == NULL)
{
free(p);
return ('\0');
}
for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (; i >= 0; i--)
{
free(p[i]);
}
free(p);
return ('\0');
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
p[i][j] = 0;
}
}
return (p);
}
