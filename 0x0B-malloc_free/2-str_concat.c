#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - entry point.
 * @s1: string 1.
 * @s2: string 2.
 * Return: pointer to string concatenate.
 */

char *str_concat(char *s1, char *s2)
{
char *p;
int i;
int j;
int l1 = 0;
int l2 = 0;
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
p = malloc((l1 + l2) *sizeof(char));
if (p == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != 0; i++)
{
p[i] = s1[i];
}
for (j = 0; j <= (l2 + 1); j++)
{
p[i + j] = s2[j];
}
return (p);
}
