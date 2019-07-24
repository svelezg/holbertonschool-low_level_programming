#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  .
 *
 * @argc: argument count
 * @argv: argument values vector.
 * Return: 0 on succes.
 */
int main(__attribute__((unused)) int argc,
__attribute__((unused)) char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);


	result = get_op_func(argv[2])(num1, num2);

	printf("%i\n", result);

	return (0);

}
