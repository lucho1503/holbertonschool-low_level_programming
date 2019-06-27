#include <stdio.h>
/**
 * main - fibonnacci number adds.
 *
 *
 *
 * Return: 0.
 */

int main(void)
{
long double y, a;
int z = 1;
int x = 2;
printf("%d, %d, ", z, x);
for (a = 3; a <= 50; a++)
{
y = x + z;
printf("%LG, ", y);
z = x;
x = y;
}
printf("\n");
return (0);
}
