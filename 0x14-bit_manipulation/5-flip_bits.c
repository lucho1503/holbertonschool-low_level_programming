#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	
	m = n ^ m;
	n = 0;
	while (m > 0)
	{
		n = n + (m & 1);
		m >>= 1;
	}
	return (n);
}
