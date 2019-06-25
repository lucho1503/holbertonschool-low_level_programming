#include "holberton.h"
/**
 * print_sign - checks if negative or positive.
 *
 * @n: is positive o negative o 0.
 *
 * Return: 1 if n greater than zero, 0 if is 0 and -1 if n less than 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
