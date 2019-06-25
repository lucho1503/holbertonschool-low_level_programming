#include "holberton.h"
/**
 * print_last_digit - last digit.
 *
 * @i: find the last digit.
 *
 * Return: the last digit.
 */
int print_last_digit(int i)
{
int t = i % 10;
if (t < 0)
{
_putchar('0' + -t);
return (-t);
}
else
{
_putchar('0' + t);
return (t);
}
}
