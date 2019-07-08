#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums -  P prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 * @a: matrix
 * @size: matrix size
 * Return: void
 *
 */
void print_diagsums(int *a, int size)
{
	/* local variable declaration */
	int i, j, k;
	int sum1 = 0;
	int sum2 = 0;

	k = 0;
	for (i = 0 ; i < size ; i++)
		{
		for (j = 0 ; j < size ; j++)
			{
			if (i == j)
				sum1 = sum1 + *(a + k);
			if (i + j == size - 1)
				sum2 = sum2 + *(a + k);
			k++;
/*			printf("(%d, %d)\n", sum1, sum2);*/
			}
		}

	printf("%d, %d\n", sum1, sum2);
}
