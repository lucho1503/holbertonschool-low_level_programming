#include "holberton.h"

/**
 * more_numbers - print 0 to 14.
 *
 *
 *
 * Return: 0 to 14.
 */

void more_numbers(void)
{
int c, a;
for (a = 0; a <= 9; a++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10)
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
