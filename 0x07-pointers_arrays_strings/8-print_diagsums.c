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
for (i = 0; i <= (size - 1); i++)
{
y = (size + 1) * i;
x = x + *(a + y);
}
printf("%d \n", x);
}
