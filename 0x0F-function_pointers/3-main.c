#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point function, principal.
 * @argc: number of arguments in agrv.
 * @argv: matriz of size argc.
 * Return: 0 if is succesfull.
 */

int main(int argc, char *argv[])
{
	int (*operator)(int, int);
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", operator(num1, num2));
	return (0);
}
