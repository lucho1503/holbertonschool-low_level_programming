#include "holberton.h"

/**
 * swap_int - swaps the values.
 * @a: value1.
 * @b: value2.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int z;
z = *a;
*a = *b;
*b = z;
}
