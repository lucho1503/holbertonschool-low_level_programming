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
unsigned long int y, a;
int z = 1;
int x = 2;
printf("%d, %d, ", z, x);
for (a = 3; a <= 50; a++)
{
y = x + z;
printf("%lu, ", y);
z = x;
x = y;
}
printf("\n");
return (0);
}
