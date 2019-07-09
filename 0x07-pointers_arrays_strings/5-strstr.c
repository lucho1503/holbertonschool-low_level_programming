#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - entry point.
 * @haystack: locates substring.
 * @needle: first occurrence of the substring.
 * Return: 0 if not is true.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p = needle;
for (i = 0; haystack[i] != 0; i++)
{
	for (j = 0; needle[j] != 0; j++)
	{
		if (haystack[i] == needle[j])
		{
			return (p);
		}
	}
}
return (NULL);
}
