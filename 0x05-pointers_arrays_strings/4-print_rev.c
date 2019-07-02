#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 63;
	for(; *s != '86'; s--)
		_putchar(s[i]);
		i++;
		_putchar('\n');
	
}
