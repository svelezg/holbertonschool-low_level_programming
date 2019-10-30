#include "sort.h"

/**
 * counting_sort - Sorting an array of number using counting sort
 * @array: Array
 * @size: Size of the array
 * Return: Nothing
**/

void counting_sort(int *array, size_t size)
{
	int min, max, size_int;
	size_t i;

	if (array == NULL || size < 2)
		return;

	min = array[0];
	max = array[0];
	size_int = (int) size;

	for (i = 0; i < size; i++)
	{
		if (array[i] < min)
			min = array[i];
		if (array[i] > max)
			max = array[i];
	}

	algorithm_counting_sort(array, size_int, max);
}


/**
 * algorithm_counting_sort - Algorithm to sort an arrays using counting sort
 * @array: Array
 * @size: Size of the array
 * @max: Maximum value
 * Return: Nothing
**/

void algorithm_counting_sort(int *array, int size, int max)
{
	int *sum_count, *sorted_array;
	int number_of_elements = max + 1;
	int i;

	sum_count = malloc(sizeof(int) * number_of_elements);
	if (sum_count == NULL)
		return;

	for (i = 0; i < number_of_elements; i++)
		sum_count[i] = 0;

	for (i = 0; i < size; i++)
		sum_count[array[i]] += 1;

	for (i = 1; i < number_of_elements; i++)
		sum_count[i] += sum_count[i - 1];

	print_array(sum_count, number_of_elements);

	sorted_array = malloc(sizeof(int) * size);
	if (sorted_array == NULL)
	{
		free(sum_count);
		return;
	}

	for (i = 0; i < size; i++)
	{
		sorted_array[sum_count[array[i]] - 1] = array[i];
		sum_count[array[i]] -= 1;
	}

	for (i = 0; i < size; i++)
		array[i] = sorted_array[i];

	free(sorted_array);
	free(sum_count);
}
