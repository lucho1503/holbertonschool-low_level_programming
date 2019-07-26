#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *l;
	va_list var;

	va_start(var, n);
	
	for (i = 0; i < n; i++)
		{
			l = va_arg(var, char *);
			
			if (separator != NULL)
				{
					printf("%s", l);
					if (i < n - 1)
						{
					printf("%s", separator);
						}
				}
			if (separator == NULL)
				{
					printf("(nil)");
				}
		}
	va_end(var);
	printf("\n");
}
