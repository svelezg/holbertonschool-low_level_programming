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
	unsigned int i;
	char *buff;
	char *newptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		buff = malloc(old_size);
		i = 0;
		while (i < old_size)
		{
			*(buff + i) = *((char *)ptr + i);
			i++;
		}

		newptr = (char *)malloc(new_size);
		if (newptr == NULL)
			return (ptr);
		if (newptr != NULL)
		{
			i = 0;
			while (i < old_size)
			{
				*(newptr + i) = *(buff + i);
				i++;
			}
			free(buff);
			ptr = newptr;
		}
	}
	return (ptr);
}
