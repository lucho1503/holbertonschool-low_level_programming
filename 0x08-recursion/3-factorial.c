#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
		{
			return (-1);
		}
	else if (n  == 0)
		{
			return (1);
		}
	else
		{
			return (n * factorial(n - 1));
		}
}
