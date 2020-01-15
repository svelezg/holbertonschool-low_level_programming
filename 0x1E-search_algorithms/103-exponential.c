#include "search_algos.h"

/**
 * my_min1 - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @a: pointer to the first element of the array to search in
 * @b: number of elements in array
 * Return: returns the minimum
 */

int my_min1(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t start = 0, end = 0, mid = 0, index, bound;

	if (!array)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%i] = [%i]\n", (int)bound, array[bound]);
		bound *= 2;
	}

	start = bound / 2;
	end = my_min1(bound, size - 1);
	printf("Value found between indexes [%d] and [%ld]\n", (int)start, end);

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
