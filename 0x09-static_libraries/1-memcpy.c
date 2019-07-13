#include "holberton.h"

/**
 * *_memcpy - entry point.
 * @src: bytes from memory.
 * @n: the size of the memory to print.
 * @dest: copy bytes from src.
 *
 * Return: dest with bytes.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
