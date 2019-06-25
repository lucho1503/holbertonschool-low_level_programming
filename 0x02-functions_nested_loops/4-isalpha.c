#include "holberton.h"
/**
 * _isalpha - checks for alphabetics character.
 *
 * @c: characters alphabetics.
 *
 * Return: 1 if is alphabetics, otherwise 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
