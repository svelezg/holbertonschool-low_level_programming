#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array -  Creates an array of chars.
 *
 * @size: array size
 * @c: Character.
 *
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
