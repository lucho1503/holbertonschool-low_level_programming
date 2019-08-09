#include "holberton.h"
#include <stdlib.h>
/**
 * binary_to_uint - entry point.
 * @b: pointer to string of characteres
 * Return: number convert to integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int entero = 0;
	int i, j;
	int mul = 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b == NULL && b[i] > '1')
		{
			return (0);
		}
	}
	for (j = i; j >= 0; j--)
	{
		if (b[j] > 'a' && b[j] < 'z')
		{
			return (0);
		}
		if (b[j] == '1')
		{
			entero = entero + mul;
		}
		mul = mul * 2;
	}
	return (entero / 2);
}
