#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, e;
	unsigned int factor = 1;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	i = 0;
	while (*(b + i) != '\0')
	{
		if ((*(b + i) != '0' && *(b + i) != '1'))
		{
			return (0);
		}
		i++;
	}
	i = 0;
	while (*(b + i) != '\0')
		i++;
	e = i - 1;
	i = 0;
	while (*(b + i) != '\0')
	{
		if (*(b + i) == '0')
			;
		else if (*(b + i) == '1')
		{
			j = 0;
			while (j < e)
			{
				factor = factor * 2;
				j++;
			}
			num = num + factor;
			factor = 1;
		}
		e--;
		i++;
	}
	return (num);
}
