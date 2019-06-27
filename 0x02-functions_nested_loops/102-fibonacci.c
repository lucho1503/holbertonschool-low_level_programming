#include <stdio.h>
/**
 * main - fibonnacci number adds.
 *
 *
 *
 * Return: any.
 */

int main(void)
{
long double y, a, x, z;
z = 1;
x = 2;
printf("%LG, %LG, ", z, x);
for (a = 0; a <= 98; a++)
{
y = x + z;
printf("%LG, ", y);
z = x;
x = y;
}
printf("\n");
}
