#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
int n, last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (n > 5)
{
printf("last digit of %d is %d and is greather than 5 \n", n, last);
}
else if (n < 6 && n != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
else if (n == 0)
{
printf("last digit of %d is 0 and is 0\n", n);
}
return (0);
}