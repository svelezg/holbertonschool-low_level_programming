#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a parameter on each element of an array.
 * @array: Array
 * @size: Arraay size
 * @action: function to call
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		exit(0);

	for (i = 0 ; i < size; i++)
		action(*(array + i));
}
