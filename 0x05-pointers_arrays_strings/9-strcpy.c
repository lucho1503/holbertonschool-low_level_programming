#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int z;
	for (z = 0; src[z] != 0; z++)
		{
			dest[z] = src[z];
		}
	dest[z] = 0;
	return dest;
}
