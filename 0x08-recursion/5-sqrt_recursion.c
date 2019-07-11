#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		{
			return (-1);
		}
	else if (n == 0)
		{
			return (0);
		}
	else if (n == 1)
		{
			return (1);
		}
	else
		{
			return (_sqrt(int n, 1)); 
		}
}

int _sqrt(int n, int i)
{
	i = 1;
	if (n == i * i)
		{
			return (i);
		}
	else if (n < i * i)
		{
			return (-1);
		}
	else
		{
			return (_sqrt (n, i++)); 
		}
}
