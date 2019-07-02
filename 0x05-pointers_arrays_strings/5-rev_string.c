#include "holberton.h"

/**
 * rev_string - reverse.
 * @s: containts string
 * Return: 0 if is succesfull.
 */

void rev_string(char *s)
{
int l = 0, m = 0;
char ls[700];
while (*(s + m))
{
ls[m] = s[m];
m++;
}
m = m - 1;
while (m >= 0)
{
s[m] = ls[l];
l++;
m--;
}
}
