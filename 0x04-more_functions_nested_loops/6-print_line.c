#include "holberton.h"

/**
 * print_line - print lines.
 * @n: variable that print n lines.
 * Return: lines.
 **/

void print_line(int n)
{
int z;
if (n > 0)
{
for (z = 0; z < n; z++)
{
_putchar(95);
}
}
_putchar('\n');
}
