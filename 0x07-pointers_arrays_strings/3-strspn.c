#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	for (i = 0; i[s] != 0 && i < accept[i]; i++)
		{
			if (s[i] == accept[i])
				{
					
					i++;
				}
		}
	accept = 0;
	return (i + 1);
}
