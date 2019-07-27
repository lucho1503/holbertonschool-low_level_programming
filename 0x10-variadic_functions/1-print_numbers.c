#include "variadic_functions.h"

/**
 * print_numbers - entry point.
 * @n: numbers of arguments.
 * @separator: string to print.
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, m;
	va_list var;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		m = va_arg(var, unsigned int);
		if (!(i == (n - 1)))
		{
			if (separator != NULL)
				printf("%d%s", m, separator);
			else
				printf("%d", m);
		}
		else
		{
			printf("%d", m);
		}
	}
	printf("\n");
	va_end(var);
}
