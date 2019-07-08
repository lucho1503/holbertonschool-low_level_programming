#include "holberton.h"

/**
 * *_strchr - entry point.
 * @s: pointer to c.
 * @c: string of test.
 * Return: string to s pointer.
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] == c; i++)
s[i] = c;
return (s + 2);
}
