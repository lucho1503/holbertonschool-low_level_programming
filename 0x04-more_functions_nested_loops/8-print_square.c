#include "holberton.h"

/**
 * print_square - print a square whit #.
 * @size: conatins the numbers of prints.
 * Return: square of #.
 **/

void print_square(int size)
{
int x, y;
if (size > 0)
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
