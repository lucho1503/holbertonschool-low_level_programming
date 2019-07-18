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
int i;
unsigned int j;
int l1 = 0;
unsigned int l2 = 0;
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
return (s2);
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
for (j = 0; j <= (n - 1); j++)
{
p[i + j] = s2[j];
}
return (p);
}
