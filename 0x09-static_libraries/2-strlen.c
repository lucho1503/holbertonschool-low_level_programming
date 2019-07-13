#include "holberton.h"

/**
 * _strlen - lenght the string print.
 * @s: containt the string.
 * Return: lenght the string.
 */

int _strlen(char *s)
{
int i;
for (; *s != 0; s++)
i++;
return (i);
}
