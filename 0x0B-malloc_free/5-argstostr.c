#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 *
 * @ac: Argument count
 * @av: Argument values
 *
 * Return: pointer should point to a new string.
 */
char *argstostr(int ac, char **av)
{

	int i, j, k, size = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1 ; i < ac ; i++)
	{
		j = 0;
/*		printf("*(*(av + %i)+ %i) = %c\n", i, j, *(*(av + i)+ j));*/
		while (*(*(av + i) + j) != '\0')
		{
/*			printf("*(*(av + %i)+ %i) = %c\n", i, j, *(*(av + i)+ j));*/
			size++;
/*			printf("size = %i\n", size);*/
			j++;
		}
		size++;
	}
/*	printf("size = %i\n", size);*/
	string = (char *)malloc(size * sizeof(char));
	k = 0;
	for (i = 1 ; i < ac ; i++)
	{
		j = 0;
		while (*(*(av + i) + j) != '\0')
		{
			*(string + k) = *(*(av + i) + j);
			k++;
			j++;
		}
		*(string + k) = '\n';
		k++;
	}
	return (string);
}
