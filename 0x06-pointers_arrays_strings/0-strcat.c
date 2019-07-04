#include "holberton.h"

/**
 * *_strcat - add string.
 * @dest: string complete.
 * @src: string to add.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
int l;
char *p;
for (l = 0; *dest != 0; dest++)
{
l++;
}

p = dest + l;
while (*src)
	*p++ = *src++;
*p = 0;
return (dest);
}
