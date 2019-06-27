#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

void print_line(int n)
{
	int z;
	
	if (n > 0)
		{
	for (z = 0; z < n; z++)
		{
			_putchar(95);
		}
		}
	_putchar('\n');	
		
}
