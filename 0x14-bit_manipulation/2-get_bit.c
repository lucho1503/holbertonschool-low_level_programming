#include "holberton.h"

/**
 * get_bit - entry point.
 * @n: number that store a value.
 * @index: index where are the bit to get.
 * Return: 1 if is succesfull or 0 if not.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n)) * 8)
	{
		return (-1);
	}
	while (index--)
	{
		n >>= 1;
	}
	return (n & 1);
}
