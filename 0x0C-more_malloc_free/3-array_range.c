#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range -  Allocates memory for an array of integer.
 * @min: Min integer
 * @max: Max integer
 * Return: returns a pointer to the array
 */
int *array_range(int min, int max)
{
	unsigned int n, i;
	int *array;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	array = malloc(n * sizeof(int));

	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < n)
	{
		*(array + i) = min + i;
		i++;
	}

	return (array);
}
