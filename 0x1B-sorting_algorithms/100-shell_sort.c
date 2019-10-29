#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * using the Shell sort algorithm.
 *
 * @array: array
 * @size: size
 */
void shell_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, prev = 0, flag = 0;
	int temp = 0, right = 0, left = 0;

	if (array == NULL || size < 2)
		return;


	prev = size;
	while (prev > 1)
	{
		prev = gap(prev);


		for (i = 0; i < size - prev; i++)
		{
			for (j = i + prev; j >= prev; j--)
			{
				left = array[j - prev];
				right = array[j];
				if (right < left)
				{	temp = array[j - prev];
					array[j - prev] = array[j];
					array[j] = temp;
					flag++;
				}
				if (j == 0)
					break;
			}
		}

		print_array(array, size);
		flag = 0;
	}
}

/**
 * gap - Knuth sequence for gap
 * using the Shell sort algorithm.
 *
 * @limit: limit for gap size
 * Return: gap size
 */
size_t gap(size_t limit)
{
	size_t n = 0, prev = 0;

	while (n < limit)
	{	prev = n;
		n = n * 3 + 1;
	}
	return (prev);
}
