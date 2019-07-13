#include "holberton.h"

/**
 * *_memset - entry point.
 * @b: contains the array.
 * @s: pointer a b.
 * @n: number of bytes.
 * Return: a pointer to memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
