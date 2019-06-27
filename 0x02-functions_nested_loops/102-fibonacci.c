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
long double y, a;
int z = 1;
int x = 2;
printf("%d, %d, ", z, x);
for (a = 0; a <= 98; a++)
{
y = x + z;
z = x;
x = y;
printf("%LG, \n", y);
}
return (0);
}
