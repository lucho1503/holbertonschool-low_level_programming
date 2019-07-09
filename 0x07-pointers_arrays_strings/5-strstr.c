#include "holberton.h"

/**
 * *_strstr - entry point.
 * @haystack: locates substring.
 * @needle: first occurrence of the substring.
 * Return: 0 if not is true.
 */

char *_strstr(char *haystack, char *needle)
{
int i;
for (i = 0; haystack[i] != 0; i++)
{
if (*haystack == *needle)
return (haystack);
}
return (needle);
}
