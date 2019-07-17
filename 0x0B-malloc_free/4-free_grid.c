#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - entry point.
 * @grid: doble pointer to array.
 * @height: height of array or rows.
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
