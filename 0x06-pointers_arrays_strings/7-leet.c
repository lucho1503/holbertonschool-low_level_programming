#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *leet(char *p)
{
	int z = 0;
	int x;
	char a[6] = "aeolt";
	char b[6] = "AEOLT";
	char c[6] = "43017";	
	for (; p[z] != 0; z++)
	{
		for (x = 0; x < 5; x++)
		{
		if (p[z] == a[x] || p[z] == b[x])
		{
			p[z] = c[x];
		}
		}
	}
	return (p);
}
