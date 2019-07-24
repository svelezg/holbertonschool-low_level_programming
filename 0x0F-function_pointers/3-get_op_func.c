#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - Adds two integers
 * @s: Operator passed as argument to the program
 * Return: Pointer to function
 *
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (strcmp(s, (ops[i].op)) != 0)
	{
		i++;
		if (i == 5)
		{
			printf("Error\n");
			exit(98);
		}
	}


	return ((ops[i]).f);
}


