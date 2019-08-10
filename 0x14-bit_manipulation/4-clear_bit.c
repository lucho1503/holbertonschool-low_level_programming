#include "holberton.h"

/**
 * clear_bit - entry point.
 * @n: pointer to address of index.
 * @index: where is the given index.
 * Return: 1 if is succesfull or -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > (sizeof(i) * 8))
	{
		return (-1);
	}
	i <<= index;
	if (*n & i)
		*n = *n - i;
	return (1);
}
