#include "search_algos.h"

/**
 * binary_search - Creates a binary tree node
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = 0, mid = 0, index;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;

	while (end >= start)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (index = start; index < end; index++)
			printf("%i, ", array[index]);
		printf("%i\n", array[end]);
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	/* f value is not present in array, your function must return -1*/
	return (-1);
}
