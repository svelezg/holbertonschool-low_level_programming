#include "search_algos.h"

/**
 * my_bynary_search - recursive bynary search
 *
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * @left: left bound
 * @right: right bound
 * Return: first index where value is located
 */
int my_bynary_search(int *array, int value, int left, int right)
{
	int mid, index;

	mid = (left + right) / 2;

	printf("Searching in array: ");
	for (index = left; index < right; index++)
		printf("%i, ", array[index]);
	printf("%i\n", array[right]);

	/* Base case 1 */
	if (left == right)
		return (-1);

	if (right - left == 1)
		if (array[mid] == value)
			return (mid);

	/* Recursive case 2 (Select right side from center) */
	if (value > array[mid])
		return (my_bynary_search(array, value, (mid + 1), right));

	else
	/*# Recursive case 1 (Select left side from center)*/
	return (my_bynary_search(array, value, left, mid));

}

/**
 * advanced_binary - Bynary search
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	int left = 0,  right = 0;

	/* Base case 0 */
	if (!array)
		return (-1);

	right = (int)size - 1;

	return (my_bynary_search(array, value, left, right));

}
