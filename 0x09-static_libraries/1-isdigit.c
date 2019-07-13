#include "holberton.h"

/**
 * _isdigit - check if is digit.
 *
 * @c: _isdigit: check if is digit.
 *
 * Return: 1 if is success, otherwise returns 0.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
