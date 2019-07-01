#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	char i;
	for (; *s != 0; s++)
		i++;
	
	return (i);
	
}
