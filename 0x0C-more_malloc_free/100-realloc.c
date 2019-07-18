#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc -  Reallocates a memory block using malloc and free.
 * @ptr: Pointer
 * @old_size: Old size
 * @new_size: New size
 * Return: returns a pointer to the array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, min_size;
	char *newptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (old_size > new_size)
		min_size = new_size;
	else
		min_size = old_size;

	newptr = malloc(new_size);
	if (newptr == NULL)
		return (ptr);

	for (i = 0 ; i < min_size ; i++)
		*(newptr + i) = *((char *)ptr + i);

	free(ptr);
	return (newptr);
}
