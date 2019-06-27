#include "holberton.h"

/**
 * print_diagonal - diagonal and space.
 * @n: contains the numbers de spaces and diagonals.
 * Return: diagonal.
 **/

void print_diagonal(int n)
{
int x, z;
if (n > 0)
{
for (x = 0; x < n ; x++)
{
for (z = 0; z < x; z++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
