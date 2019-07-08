#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i;
	for (i = 0; s[i] == c;i++)
		s[i] = c;
			return (s + 2);
}
