#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i;
	int l;
	int z = 0;
	int y = 0;
	char *p;
	
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	
for (i = 0; i < ac; i++)
{
	for (l = 0; av[i][l] != 0; l++)
	{
		y = y + 1;
	}
}

p = malloc((ac + y + 1) * sizeof(char));

if (p == NULL)
{
	return (NULL);
}

for (i = 0; i < ac; i++)
{
	for (l = 0; av[i][l] != 0; l++, z++)
	{
		p[z] = av[i][l];
	}
	p[z] = '\n';
	z = z + 1;
}

return (p);
}
