#include "holberton.h"

/**
 * puts_half - print half string.
 * @str: containts the string.
 * Return: 0 if is succesfull.
 */

void puts_half(char *str)
{
int z = 5;
for (; str[z]; str++)
{
_putchar(str[z]);
}
_putchar('\n');
}
