#include "calc.h"
#include <stdio.h>

/**
 * get_op_func - template betty style.
 * Description: select the operation correct.
 * @s: pointer to args.
 * Return: pointer to function correct.
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] =
	 {
		 {"+", op_add},
		 {"-", op_sub},
		 {"*", op_mul},
		 {"/", op_div},
		 {"%", op_mod},
		 {NULL, NULL}
	 };
int i = 0;

while (i < 5)
	{
	        if (ops[i].op[0] == s[0];)
			{
			return (ops[i].f);
			}
		i++;
	}
return (NULL);
}
