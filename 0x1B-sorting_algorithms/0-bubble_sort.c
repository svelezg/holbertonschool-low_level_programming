#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 *
 * @array: array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, counter;

	if (array == NULL || size < 2)
		return;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1 - j; i++)
		{
			counter = 0;
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				counter++;
			}
		}
		if (counter == 0)
			return;
	}
}
