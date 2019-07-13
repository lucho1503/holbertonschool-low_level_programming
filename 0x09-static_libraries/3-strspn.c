#include "holberton.h"

/**
 * _strspn - entry point.
 * @s: pointer to accept.
 * @accept: lengt to prefix.
 * Return: lenght.
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
