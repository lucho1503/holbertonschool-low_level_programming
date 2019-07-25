#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - entry point.
 * @a: integer1.
 * @b: intreger2.
 * Return: add a + b;
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry point.
 * @a: integer1.
 * @b: intreger2.
 * Return: diferrence a - b;
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - entry point.
 * @a: integer1.
 * @b: intreger2.
 * Return: the product a * b;
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - entry point.
 * @a: integer1.
 * @b: intreger2.
 * Return: the result a / b;
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - entry point.
 * @a: integer1.
 * @b: intreger2.
 * Return: the remainder the division a % b;
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
