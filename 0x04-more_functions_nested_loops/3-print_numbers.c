#include "holberton.h"

/**
 * print_numbers - numbers 0 to 9.
 *
 *
 *
 * return: 0 to 9.
 */

void print_numbers(void)
{
int z;
for (z = '0'; z <= '9'; z++)
{
_putchar(z);
}
_putchar('\n');
}
