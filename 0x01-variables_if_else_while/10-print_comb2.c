#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: All single digit numbers of base 10 starting from 0
 **/
int main(void)
{
int z, x;
for (z = '0'; z <= '9'; z++)
{
for (x = '0'; x <= '9'; x++)
{
putchar(z);
putchar(x);
if (z != '9' || x != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
