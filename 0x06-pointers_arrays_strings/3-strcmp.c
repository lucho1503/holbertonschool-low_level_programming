#include "holberton.h"

/**
 * _strcmp - entry ponit.
 * @s1:string.
 * @s2:string.
 * Return: diference betwen s1 and s2.
 */

int _strcmp(char *s1, char *s2)
{
int z = 0;
for (; *s1 == *s2 && *s1 != 0 && *s2 != 0 ;)
{
s1++;
s2++;
}
z = *s1 - *s2;
return (z);
}
