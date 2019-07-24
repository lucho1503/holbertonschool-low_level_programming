#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - entry point.
 * @array: array of integers.
 * @size: size of array.
 * @cmp: pointer to function.
 * Return: -1 if false, pointer if si true.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0 && array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
