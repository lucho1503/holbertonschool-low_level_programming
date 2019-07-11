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
			return (raiz (n, 1));
		}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int raiz(int n, int i)
{
	
	if (n == (i * i))
		{
			return (i);
		}
	else if (n > (i * i))
		{
			return (raiz (n, i + 1));
		}
	else
		{
			return (-1); 
		}
}
