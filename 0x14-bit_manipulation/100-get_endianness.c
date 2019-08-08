#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"


/**
 * get_endianness - Checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{

	unsigned int n = 1;

	if ((n >> 1) < n)
		return (1);
	else
		return (0);
}

