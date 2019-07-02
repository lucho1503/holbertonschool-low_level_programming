#include "holberton.h"


/**
 * print_rev - print reverse.
 * @s: containt string.
 * Return: string in reverse.
 */

void print_rev(char *s)
{
int i = 0;
for (; s[i] != 0;)
i++;
i--;
for (; i >= 0 ; i--)
_putchar(s[i]);
_putchar('\n');
}
