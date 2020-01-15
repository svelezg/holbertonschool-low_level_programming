#include "search_algos.h"
#include <math.h>

/**
 * my_min - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @a: pointer to the first element of the array to search in
 * @b: number of elements in array
 * Return: returns the minimum
 */

int my_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0;

	printf("Value checked array[%i] = [%i]\n", 0, array[0]);
	if (array[0] == value)
		return (0);

	/* Finding block size to be jumped*/
	right = sqrt(size);

	/* Finding the block where element is present (if it is present) */
	/* while (array[my_min(right, size)-1] < value) */
	while ((array[right] < value) & (right < size))
	{
		printf("Value checked array[%li] = [%i]\n", right, array[right]);
		left = right;
		right = right + sqrt(size);
		if (left >= size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%ld]\n", (int)left, right);

	/* Doing a linear search for value in block */
	/* beginning with prev. */


	while ((array[left] <= value) & (left < size))
	{
		printf("Value checked array[%i] = [%i]\n", (int)left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}

	return (-1);
}
