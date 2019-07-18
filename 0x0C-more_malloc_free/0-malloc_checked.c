#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  Allocates memory using malloc.
 * @b: array size
 * Return: If fail status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *res;

/*	printf("%i\n", b);*/
	res = malloc((unsigned int)b);
	if (res == NULL)
		exit(98);

	return (res);
}
