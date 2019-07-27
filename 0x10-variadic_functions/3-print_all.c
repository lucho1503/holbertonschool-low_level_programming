#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_c(va_list *var)
{
        printf("%c", va_arg(var, int));
}
void print_i(va_list *var)
{
        printf("%d", va_arg(var, int));
}
void print_f(va_list *var)
{
        printf("%f", va_arg(var, double));
}
void print_s(va_list *var)
{
        printf("%s", va_arg(var, char *));
}


void print_all(const char * const format, ...)
{
	va_list var;
	int i = 0;
	char *l;
	l = (char *) format;
	va_start(var, format);
	ar_r st_r [] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};
	while(*l)
	{
		while (st_r[i].pt)
		{
			if (st_r[i].pt[0] == *l)
			{
			st_r[i].pt(&var);
			l++;
			if (l == 0)
			{
				printf("(nil)");
				break;
			}
			l--;
			printf("%c, ", *l);
			}
			i++;
		}
		l++;
	}
	printf("\n");
}
