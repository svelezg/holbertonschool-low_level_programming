#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"


/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: The value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 32)
		return (-1);

	bit = n >> index;
	bit = bit & 1;

	return (bit);
}

