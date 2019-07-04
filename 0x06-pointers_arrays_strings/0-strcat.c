#include "holberton.h"

/**
 * *_strcat - check string.
 *
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
while (*src != 0)
*p++ = *src++;
return (dest);
}
