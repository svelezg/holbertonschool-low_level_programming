#include "sort.h"
#include <stdio.h>

/**
 * quick_sort_hoare - sorts an array of integers in ascending
 * order using the Quick sort Hoare algorithm
 *
 * @array: array
 * @size: size
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	algorithm_quick_sort_h(array, 0, size - 1, size, size);
}

/**
 * algorithm_quick_sort_h - sorts an array of integers in ascending
 * order using the Quick sort Hoare algorithm
 *
 * @array: array
 * @lo: lower limit
 * @hi: upper limit
 * @size: size
 * @p: partition
 */
void algorithm_quick_sort_h(int *array, size_t lo, size_t hi, size_t size,
		size_t p)
{
	size_t new = 0;

	if (lo < hi)
	{	new = partition_h(array, lo, hi, size);
		if (p == new)
			p = new - 1;
		else
			p = new;
		algorithm_quick_sort_h(array, lo, p, size, p);
		algorithm_quick_sort_h(array, p + 1, hi, size, p);
	}
}

/**
 * partition_h - partition function
 * order using the Quick sort algorithm
 *
 * @array: array
 * @lo: lower limit
 * @hi: upper limit
 * @size: size
 * Return: partition index
 */
size_t	partition_h(int *array, size_t lo, size_t hi, size_t size)
{
	size_t i = 0, j = 0;
	int pivot = 0, temp = 0, aux = 0;

	pivot = array[hi];
	i = lo - 1;
	j = hi + 1;
	while (1)
	{
		do {
			i = i + 1;
		} while (array[i] < pivot);

		do {
			j = j - 1;
		} while (array[j] > pivot);

		if (i >= j)
			return (j);

		/* swap A[i] with A[j] */
		aux = array[i];
		temp = array[j];
		array[j] = aux;
		array[i] = temp;
		print_array(array, size);

	}
}
