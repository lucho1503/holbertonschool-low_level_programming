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
for (i = 0; s[i] != 0; i++)
	{
		if (*s == c)
			{
				return (s);
			}
		else
			{
				s++;
			}
	}
		return (s);
		
}
