#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Description: print_alphabet_x10 in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char x;
char y;
for (y = 0; y < 10; y++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
