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
	int z, y;
for (z = '0'; z <= '9'; z++)
{
putchar(z);
}
for (y = 'a'; y <= 'f'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
