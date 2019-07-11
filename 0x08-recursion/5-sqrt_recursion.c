#include "holberton.h"

/**
 * _sqrt_recursion - entry point.
 * @n: integer variable.
 * Return: root of n.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
else
{
return (raiz(n, 1));
}
}

/**
 * raiz - entry point.
 * @n: integer variable.
 * @i: integer variable iterative.
 * Return: root of r.
 */
int raiz(int n, int i)
{
if (n == (i * i))
{
return (i);
}
else if (n > (i * i))
{
return (raiz(n, i + 1));
}
else
{
return (-1);
}
}
