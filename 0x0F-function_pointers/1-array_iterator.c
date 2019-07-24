#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - entry point.
 * @array: array of integers.
 * @size: size of array.
 * @action: pointer to function.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
