#include "holberton.h"

/**
 * _strspn - entry point.
 * @s: pointer to accept.
 * @accept: lengt to prefix.
 * Return: lenght.
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
for (i = 0; i[s] != 0 && i < accept[i]; i++)
{
if (s[i] == accept[i])
{
i++;
}
}
return (i + 1);
}
