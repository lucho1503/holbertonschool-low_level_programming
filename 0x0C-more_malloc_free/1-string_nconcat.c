#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - entry point.
 * @s1: string 1 for concat.
 * @s2: string 2 for concat.
 * @n: length to string 2.
 * Return: pointer to first element of array.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int j, i, l1 = 0, l2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[l1] != 0)
{
l1++;
}
while (s2[l2] != 0)
{
l2++;
}
if (n >= l2)
{
n = l2;
}
p = malloc((l1 + n + 1) * sizeof(char));
if (p == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < l1; i++)
{
p[i] = s1[i];
}
for (j = 0; j < n; j++)
{
p[i + j] = s2[j];
}
}
p[i + j] = '\0';
return (p);
}
