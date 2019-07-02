#include "holberton.h"

/**
 * puts2 - print 0 to 9 of 2 to 2 .
 * @str: containts string.
 * Return: 0 if is succesfull.
 */

void puts2(char *str)
{
int i = 0;
for (; str[i] != 0; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
