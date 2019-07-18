#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc -  Allocates memory for an array.
 * @nmemb: Number of members
 * @size: Size of members
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);


	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
		*(array + i) = 0;
		i++;
	}

	return ((void *)array);
}
