#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  Multiplies positive numbers.
 *
 * @argc: argument count
 * @argv: argument values vector.
 *
 * Return: on succes
 */
int main(__attribute__((unused)) int argc,
__attribute__((unused)) char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
/*	printf("argv[0]=%s\n", argv[0]);*/
/*	printf("argc=%i\n\n", argc);*/
	for (i = 1 ; i < argc ; i++)
	{
/*		printf("argv[%i]=%s\n", i, argv[i]);*/
		j = 0;
		while (*(argv[i] + j) != '\0')
		{
/*			printf("*(*argv + %i) + %i)= %c\n", i, j, *(*(argv + i) + j));*/

			if (*(*(argv + i) + j) == '-' || *(*(argv + i) + j) == '+')
			{
				j = 1;
/*				printf("*(*argv + %i) + %i)= %c\n", i, j, *(*(argv + i) + j));*/
			}

			if (isdigit(*(*(argv + i) + j)) == 0)
			{
				printf("Error\n");
				exit(98);
			}
			else
			{
/*				printf("Ok\n\n");*/
			}

			j++;
		}
	}
	mul = atoi(*(argv + 1)) * atoi(*(argv + 2));

	printf("%i\n", mul);
	return (0);
}
