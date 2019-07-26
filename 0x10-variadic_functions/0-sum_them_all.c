#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - entry point.
 * @n: numbers to arguments.
 * Return: added of all numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list var;

	va_start(var, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(var, unsigned int);
	}
	va_end(var);
	return (sum);
}
