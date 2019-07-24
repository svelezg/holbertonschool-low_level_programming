#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}



	return (0);

}
