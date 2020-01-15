#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t start = 0, end = 0, position = 0;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;

	while (end >= start)
	{
		position = start + (((double) (end - start) / (array[end] - array[start])) *
				(value - array[start]));
		if (position > end)
		{
			printf("Value checked array[%li] is out of range\n", position);
			return (-1);
		}
		printf("Value checked array[%i] = [%i]\n", (int)position, array[position]);
		if (array[position] == value)
			return (position);

		if (array[position] < value)
			start = position + 1;
		else
			end = position - 1;
	}

	/* f value is not present in array, your function must return -1*/
	return (-1);
}



