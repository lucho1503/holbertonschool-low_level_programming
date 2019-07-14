#include <stdio.h>

/**
 * main - entry point.
 * @argc: count arguments.
 * @argv: unused attribute.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc;)
	{
		count++;
		(*argv)++;
	}

	printf("%d\n", argc - 1);
	return (0);
}
