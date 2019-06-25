#include "holberton.h"
/**
 * _islower - check lowercase.
 *
 * @c: _islower:  character to check.
 *
 * Return: 1 if is success, otherwise returns 0.
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}
}
