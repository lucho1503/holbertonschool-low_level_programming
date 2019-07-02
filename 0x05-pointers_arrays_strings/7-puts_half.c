#include "holberton.h"

/**
 * puts_half - print half string.
 * @str: containts the string.
 * Return: 0 if is succesfull.
 */

void puts_half(char *str)
{
int z = 0;
int y;
for (; str[z] != 0;)
{
z++;
}
for (y = z % 2 == 0 ? z / 2 : z / 2 + 1; y < z; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
