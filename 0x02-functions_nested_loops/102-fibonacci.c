#include <stdio.h>
/**
 * main - fibonnacci number adds.
 *
 *
 *
 * Return: alwasys 0.
 */

int main(void)
{
long int y, a;
int z = 1;
int x = 2;
printf("%d, %d, ", z, x);
for (a = 1; a <= 50; a++)
{
y = x + z;
z = x;
x = y;
printf("%ld, ", y);
}
putchar('\n');
return (0);
}
