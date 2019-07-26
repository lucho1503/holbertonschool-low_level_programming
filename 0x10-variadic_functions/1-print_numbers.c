#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, m;
	va_list var;

	va_start(var, n);

	for (i = 0; i < n; i++)
		{
			m = va_arg(var, int);
			if (separator != NULL)
				{
					
					
					printf("%d", m);
					if (i < n - 1)
						{
					printf("%s", separator);
						}
				}
			
			
		}
	printf("\n");
	va_end(var);
}
