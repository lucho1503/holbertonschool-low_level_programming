#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - entry point.
 * @a: an array of integers.
 * @n: the number of elements to swap.
 *
 * Return: array reverse.
 */

void reverse_array(int *a, int n)
{
int z;
int change;
for (z = 0; z < (n / 2); z++)
{
change = a[z];
a[z] = a[n - z - 1];
a[n - z - 1] = change;
}
}
