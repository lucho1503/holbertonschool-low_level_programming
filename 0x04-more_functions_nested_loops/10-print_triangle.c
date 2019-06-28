#include "holberton.h"

/**
 * print_triangle - print to 1 to 1024 adds multiples 3 or 5 .
 *
 * @size: contents the prints numbers of #.
 *
 * Return: the variable size.
 */

void print_triangle(int size)
{
int x, y;
if (size > 0)
{
for (x = 1; x <= size ; x++)
{
for (y = 0; y < size; y++)
{
if (y < size - x)
{
_putchar(' ');
}
else
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
