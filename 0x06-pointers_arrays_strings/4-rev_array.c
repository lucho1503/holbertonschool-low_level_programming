#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int z;
	int change;
	
	for (z = 0; z < (n / 2); z++)
		{
		change = a[z];
		a[z] = a[n - z - 1];
		a[n - z - 1] = change;
		}
}
