#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
char d;
char b;
for (b = 'a'; b <= 'z'; b++)
putchar(b);
for (d = 'A'; d <= 'Z'; d++)
putchar(d);
putchar('\n');
return (0);
}
