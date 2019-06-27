#include <stdio.h>
/**
 * times_table - checks if negative or positive.
 *
 * @x, y, z: print tables 0 - 9.
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
			printf("%ld", y);
			putchar(',');
			putchar(' ');
			
			
		}
	putchar('\n');
	return (0);
}
