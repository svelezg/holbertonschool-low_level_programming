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
 *
 * Return: 
 */
int main(__attribute__((unused)) int argc,
__attribute__((unused)) char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argc[1]);
	num2 = atoi(argc[3]);


	result = get_op_func(argc[2]))(num1, num2);

	printf("%i\n"; result);

}
