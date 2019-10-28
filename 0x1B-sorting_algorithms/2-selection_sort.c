#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, p;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		p = i;
		for (j = 0 + i; j < size; j++)
		{
			if (array[p] > array[j])
				p = j;
		}
		if (p != i)
		{	temp = array[i];
			array[i] = array[p];
			array[p] = temp;
			print_array(array, size);
		}
	}
}
