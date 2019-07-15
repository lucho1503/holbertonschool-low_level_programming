#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point.
 * @argv: pointer to matriz.
 * @argc: arguments count.
 *
 * Return: 0 if is succesfull or 1 if not recived args.
 */

int main(int argc, char **argv)
{
	int i = 0, j = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
