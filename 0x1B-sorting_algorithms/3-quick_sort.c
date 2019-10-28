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

	algorithm_quick_sort(array, 0, size - 1);
}

void algorithm_quick_sort(int *array, size_t lo, size_t hi)
{
	size_t p = 0;

	if (lo < hi)
	{
		p = partition(array, lo, hi);
		if (p > 0)
			algorithm_quick_sort(array, lo, p - 1);

		algorithm_quick_sort(array, p + 1, hi);
	}

}

int	partition(int *array, size_t lo, size_t hi)
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
			i++;
		}
	}

	/* swap A[i] with A[hi] */
	temp = array[i];
	array[i] = array[hi];
	array[hi] = temp;
	print_array(array, hi);

	return (i);
}
