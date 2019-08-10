#include "holberton.h"

/**
 * set_bit - entry point.
 * @n: address of vaiable n.
 * @index: is where are at a given index.
 * Return: Always 0.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned long int *p;

	p = n;
	if (index > (sizeof(i)) * 8)
	{
		return (-1);
	}
	i <<= index;
	if (*p | i)
		*p = *p + i;
	return (1);
}
