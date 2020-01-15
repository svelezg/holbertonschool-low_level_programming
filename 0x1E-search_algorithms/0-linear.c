#include "search_algos.h"

/**
 * linear_search - Creates a binary tree node
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	/* array is NULL, your function must return -1*/
	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}


	/* f value is not present in array, your function must return -1*/
	return (-1);
}



