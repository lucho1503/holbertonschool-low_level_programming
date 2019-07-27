#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - entry point.
 * @n: numbers of arguments.
 * @separator: string to print.
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int m;
	va_list var;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		m = va_arg(var, int);
		if (separator != NULL)
		{
			printf("%d", m);
			if (i < (n - 1) && separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(var);
}
