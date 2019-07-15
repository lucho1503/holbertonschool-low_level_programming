#include <stdio.h>
#include <stdlib.h>
#define l 5

/**
 * main - Entry Point.
 * @argc: count of arguments passed
 * @argv: Array of strings. that conatins args.
 * Return: Always 0 (Success) else rerutn 1.
 */

int main(int argc, char *argv[])
{
int a[l] = {1, 2, 5, 10, 25};
int i;
int c = 0;
int x;
if (argc != 2)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
for (i = l - 1; i >= 0; i--)
{
if (x - a[i] >= 0 && x)
{
x -= a[i];
i++, c++;
}
}
printf("%d\n", c);
return (0);
}
