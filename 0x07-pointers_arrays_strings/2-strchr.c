#include "holberton.h"

/**
 * *_strchr - entry point.
 * @s: pointer to c.
 * @c: string of test.
 * Return: NULL .
 */

char *_strchr(char *s, char c)
{
unsigned int i = 0;
for (i = 0; s[i] != 0; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (0);
}
