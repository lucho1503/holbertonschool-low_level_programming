#include "holberton.h"

/**
 * factorial - entry point.
 * @n: contains numbers to fac.
 * Return: factorial of n.
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n  == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
