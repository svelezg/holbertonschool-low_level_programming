#include "holberton.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 *
 * @a: array
 * @n: number of elements of the array
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	/* local variable declaration */
	int j, i, m;
	int b[100];

	j = 0;
	while (j < n)
		{
		m = a[j];
/*		_putchar(m + '0'); */
		b[j] = m;
		m = b[j];
/*              _putchar(m + '0');*/
		j++;
		}

	i = 0;
	j = n - 1;
	while (i < n)
		{
		m = b[j];
/*              _putchar(m + '0'); */
		a[i] = m;
		m = a[i];
/*              _putchar(m + '0'); */
		j--;
		i++;
		}
}
