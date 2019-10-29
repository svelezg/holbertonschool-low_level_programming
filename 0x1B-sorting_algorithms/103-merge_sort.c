#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * merge_sort - sorts an array of integers in ascending order
 * using the Merge sort algorithm.
 *
 * @array: array
 * @size: size
 */
void merge_sort(int *array, size_t size)
{
	int *A = NULL, *B = NULL;
	size_t n = 0;

	A = array;
	B = malloc(size *sizeof(int));
	n = size;
	TopDownMergeSort(A, B, n);
	free(B);
}

/**
 * TopDownMergeSort - sorts an array of integers in ascending order
 * using the Merge sort algorithm.
 *
 * @A: Array A[] has the items to sort
 * @B: array B[] is a work array
 * @n: size
 */
void TopDownMergeSort(int *A, int *B, size_t n)
{
	CopyArray(A, 0, n, B);           /* duplicate array A[] into B[] */
	TopDownSplitMerge(B, 0, n, A);   /* sort data from B[] into A[] */
}

/**
 * TopDownSplitMerge - Sort the given run of array A[] using array B[]
 * as a source. using the Merge sort algorithm.
 *
 * @A: Array A[] has the items to sort
 * @B: array B[] is a work array
 * @iBegin: is inclusive
 * @iEnd: is exclusive (A[iEnd] is not in the set).
 */
void TopDownSplitMerge(int *B, size_t iBegin, size_t iEnd, int *A)
{
	size_t iMiddle;

	if (iEnd - iBegin < 2)                       /* if run size == 1 */
		return;                                 /*   consider it sorted */

	/* split the run longer than 1 item into halves */
	iMiddle = (iEnd + iBegin) / 2;              /* iMiddle = mid point*/

	/* recursively sort both runs from array A[] into B[] */

	TopDownSplitMerge(A, iBegin,  iMiddle, B);  /* sort the left  run */
	TopDownSplitMerge(A, iMiddle,    iEnd, B);  /* sort the right run */

	/* merge the resulting runs from array B[] into A[] */
	TopDownMerge(B, iBegin, iMiddle, iEnd, A);
}


/**
 * TopDownMerge - Sort the given run of array A[] using array B[] as a source.
 * using the Merge sort algorithm.
 *
 * @A: Array A[] has the items to sort
 * @B: array B[] is a work array
 * @iBegin: Left source half is A[ iBegin:iMiddle-1].
 * @iMiddle: Right source half is A[iMiddle:iEnd-1   ]
 * @iEnd: .Result is            B[ iBegin:iEnd-1   ]
 */
void TopDownMerge(int *A, size_t iBegin, size_t iMiddle, size_t iEnd, int *B)
{
	size_t i, j, k, r;

	printf("Merging...\n");
	i = iBegin, j = iMiddle;
	printf("[left]: ");
	for (r = iBegin; r < iMiddle; r++)
	{
		if (r != iBegin)
			printf(", ");
		printf("%i", A[r]);
	}
	printf("\n");
	printf("[right]: ");
	for (r = iMiddle; r < iEnd; r++)
	{
		if (r != iMiddle)
			printf(", ");
		printf("%i", A[r]);
	}
	printf("\n");
	for (k = iBegin; k < iEnd; k++)
	{                   /* While there are elements in the left or right runs...*/
		/* If left run head exists and is <= existing right run head.*/
		if (i < iMiddle && (j >= iEnd || A[i] <= A[j]))
		{	B[k] = A[i];
			i = i + 1;
		}
		else
		{	B[k] = A[j];
			j = j + 1;
		}
	}
	printf("[Done]: ");
	for (r = iBegin; r < iEnd; r++)
	{
		if (r != iBegin)
			printf(", ");
		printf("%i", B[r]);
	}
	printf("\n");
}

/**
 * CopyArray - Sort the given run of array A[] using array B[] as a source.
 * using the Merge sort algorithm.
 *
 * @A: Array A[] has the items to sort
 * @B: array B[] is a work array
 * @iBegin: Left source half is A[ iBegin:iMiddle-1].
 * @iEnd: .Result is            B[ iBegin:iEnd-1   ]
 */
void CopyArray(int *A, size_t iBegin, size_t iEnd, int *B)
{
	size_t k;

	for (k = iBegin; k < iEnd; k++)
		B[k] = A[k];
}
