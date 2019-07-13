#include "holberton.h"

/**
 * *_strcpy - entry point.
 * @dest: copy string.
 * @src: copy to dest.
 * Return: 0 if is succesfull.
 */

char *_strcpy(char *dest, char *src)
{
int z;
for (z = 0; src[z] != 0; z++)
{
dest[z] = src[z];
}
dest[z] = 0;
return (dest);
}
