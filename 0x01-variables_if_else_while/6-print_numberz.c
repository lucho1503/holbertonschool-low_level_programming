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
int z;
for (z = '0'; z <= '9'; z++)
putchar(z);
putchar('\n');
return (0);
}
