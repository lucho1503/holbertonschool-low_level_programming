#include "holberton.h"

/**
 * *_strncat - entry point.
 * @dest: string adds src.
 * @src: string that to add.
 * @n: lengt string.
 * Return: string adds dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
