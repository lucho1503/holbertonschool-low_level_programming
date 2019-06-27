#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 *
 *
 *
 * Return: 0 to 9 minus 2 and 4.
 */

void print_most_numbers(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
_putchar(c);
}
_putchar('\n');
}
