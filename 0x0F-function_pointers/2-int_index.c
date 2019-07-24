#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer.
 * @array: Array of integer
 * @size: Array size
 * @cmp: comparison function
 *
 * Return: Found integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return (-1);

	i = 0;
	while (cmp(*(array + i)) == 0)
	{
		if (i >= size - 1)
			return (-1);
		i++;
	}

	return (i);

}
