#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int z = 0;
	for (; z <= n - 1; z++)
		printf("%d%s", a[z], z < n - 1 ? ", " : "");
	printf("\n");
	
	
	
	
}
