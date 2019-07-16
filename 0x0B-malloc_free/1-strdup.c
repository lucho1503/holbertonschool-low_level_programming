#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - entry point.
 * @str: pointer to string.
 * Return: string duplicate (dest).
 */

char *_strdup(char *str)
{
char *dest;
int i, s = 0;

if (str == NULL)
{
return (NULL);
}
while (*(str + s))
	s++;
s++;
dest = malloc((s) * sizeof(char));
if (dest == NULL)
{
return (NULL);
}

for (i = 0; i < (s); i++)
{
dest[i] = str[i];
}
return (dest);
}
