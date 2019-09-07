#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: All posible combination of three digits.
 **/

int main(void)
{
	int i, j, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			for (l = '2'; l <= '9'; l++)
			{
				if (i < j && j < l)
				{
					putchar(i);
					putchar(j);
					putchar(l);
					if (!(i == '7' && j == '8' && l == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
