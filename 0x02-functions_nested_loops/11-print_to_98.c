#include <stdio.h>
/**
 * print_to_98 - print n to 98 .
 *
 * @n: numbers positives and negatives to 98.
 *
 * Return: the variable n.
 */
void print_to_98(int n)
{
if (n > 98)
{
for (; n > 98 ; n--)
{
printf("%d, ", n);
}
}
else if (n < 98)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
}
printf("%d\n", n);
}
