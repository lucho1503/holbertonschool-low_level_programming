#include "holberton.h"
/**
 * int _islower - check the code for Holberton School students.
 *
 * Description: int _islower in lowercase.
 *
 * Return: Always 0.
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
