#include "holberton.h"
#include <stdio.h>

/**
 * print_array - point entry.
 * @a: poniter.
 * @n: array.
 * Return: 0 if is succesfull.
 */

void print_array(int *a, int n)
{
int z = 0;
for (; z <= n - 1; z++)
printf("%d%s", a[z], z < n - 1 ? ", " : "");
printf("\n");
}
