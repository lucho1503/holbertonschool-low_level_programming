#include <stdio.h>

/**
 * main - print to 1 to 1024 adds multiples 3 or 5 .
 *
 *
 *
 * Return: the variable n.
 */
int main(void)
{
int x, y;
for (x = 1; x <= 1024; x++)
{
if ((x % 3) == 0 || (x % 5) == 0)
y += x;
}
printf("%d\n", y);
return (0);
}
