#include "holberton.h"

/**
 * *_strpbrk - entry point.
 * @s: pointer to accept.
 * @accept: string new.
 * Return: 0 if not such bety.
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
return (s + i);
}
}
return (0);
}
