#include "holberton.h"
#include <stdlib.h>

/**
 * print_binary - entry point.
 * @n: variable that store a number.
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 0;
	unsigned long int bi = 0;
	int a = 0;

	if (n == 0)
	{
		_putchar ('0');
	}
	for (i = 0; i < (sizeof(long int) * 8); i++)
	{
		bi = ((n << i) & 0x8000000000000000) ? 1 : 0;
		if (bi && a == 0)
		{
			a = 1;
		}
		if (bi || a != 0)
		{
			_putchar(bi + 48);
		}
	}
}
