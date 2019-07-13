#include "holberton.h"

/**
 * *_strcat - add string.
 * @dest: string complete.
 * @src: string to add.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}
return (dest);
}
