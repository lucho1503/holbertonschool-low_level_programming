#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - entry point.
 * @a: pointer to array.
 * @size: containts length to array.
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
int i, x = 0, y;
int j, b = 0, c;
for (i = 0; i <= (size - 1); i++)
{
y = (size + 1) * i;
x = x + *(a + y);
}
for (j = 1; j <= size ; j++)
{
c = (size - 1) * j;
b = b + *(a + c);
}
printf("%d, %d\n", x, b);
}
