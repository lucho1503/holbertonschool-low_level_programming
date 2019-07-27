#ifndef VARIADIC
#define VARIADIC
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct pt {
	char *pt;
	char (*p)(va_list *);
} pt_r;

void print_c(va_list *);
void print_i(va_list *);
void print_f(va_list *);
void print_s(va_list *);

#endif /* VARIADIC */
