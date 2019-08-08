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
	unsigned long int t;
	int bit;
	unsigned int max = 0;

	t = n;
	while (t > 0)
	{
		t = t / 2;
		max++;
	}

/*	printf("max = %u  index = %u \n", max, index);*/

	if (index > max)
		return (-1);

	bit = n >> index;
	bit = bit % 2;

	return (bit);
}

