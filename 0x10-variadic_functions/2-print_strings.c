#include "variadic_functions.h"

/**
 * print_strings - entry point.
 * @n: numbers to strings.
 * @separator: string to print.
 * Return: notihng.
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
		if (l == NULL)
		{
			l = "(nil)";
		}
		if (!(i == (n - 1)))
		{
			if (separator != NULL)
				printf("%s%s", l, separator);
			else
				printf("%s", l);

		}
		else
		{
			printf("%s", l);
		}
	}
	printf("\n");
	va_end(var);
}
