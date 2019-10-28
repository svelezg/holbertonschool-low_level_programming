#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	algorithm_quick_sort(array, 0, size - 1, size);
}


/**
 * algorithm_quick_sort - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: array
 * @lo: lower limit
 * @hi: upper limit
 * @size: size
 */
void algorithm_quick_sort(int *array, size_t lo, size_t hi, size_t size)
{
	size_t p = 0;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		if (p > 0)
			algorithm_quick_sort(array, lo, p - 1, size);
		algorithm_quick_sort(array, p + 1, hi, size);
	}
}


/**
 * partition - partition function
 * order using the Quick sort algorithm
 *
 * @array: array
 * @lo: lower limit
 * @hi: upper limit
 * @size: size
 * Return: partition index
 */
size_t	partition(int *array, size_t lo, size_t hi, size_t size)
{
	size_t i = 0, j = 0;
	int pivot = 0, temp = 0, aux = 0;

	pivot = array[hi];
	i = lo;
	for (j = lo; j <= hi; j++)
	{
		aux = array[j];
		if (aux < pivot)
		{	/* swap A[i] with A[j] */
			temp = array[i];
			array[i] = aux;
			aux = temp;
			array[j] = aux;

			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	/* swap A[i] with A[hi] */
	temp = array[i];
	array[i] = array[hi];
	array[hi] = temp;
	print_array(array, size);
	return (i);
}
