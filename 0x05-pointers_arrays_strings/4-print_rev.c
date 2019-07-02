#include "holberton.h"

/**
 * print_rev - print reverse.
 * @s: containt string.
 * Return: string in reverse.
 */

void print_rev(char *s)
{
int i;
for (; *s != 0; s++)

i = 0;
for (; *s >= 0 ; s--)
_putchar(s[i]);
;
_putchar('\n');
}
