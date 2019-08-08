#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"


/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index
 * Return: The value of a bit at a given index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux;


	if (n == NULL)
		return (-1);

	if (index > 32)
		return (-1);


	aux = 1 << index;
	*n = *n | aux;

	return (1);
}

