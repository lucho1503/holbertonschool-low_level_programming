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
int i;
if (str == NULL)
{
return (NULL);
}
dest = malloc(10 * sizeof(char));
if (dest == NULL)
{
return (NULL);
}
for (i = 0; str[i] != 0; i++)
{
dest[i] = str[i];
}
return (dest);
}
