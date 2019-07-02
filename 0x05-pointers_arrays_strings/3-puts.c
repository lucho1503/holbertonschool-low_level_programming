#include "holberton.h"

/**
 * _puts - print a string characters.
 * @str: containt the string.
 * Return: string.
 */

void _puts(char *str)
{
int i = 0;
for (; *str != 0; str++)
_putchar(str[i]);
i++;
_putchar('\n');
}
