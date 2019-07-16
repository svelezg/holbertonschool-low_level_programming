#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: pointer should point to a new string.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

/*	printf("%i %i\n", width, height);*/

	array = (int **)malloc(height * sizeof(int *));
	for (i = 0 ; i < height ; i++)
		*(array + i) = (int *) malloc(width * sizeof(int));


	if  (array == NULL)
	{
/*		printf("Error\n");*/
		return (NULL);
	}

	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			*(*(array + i) + j) = 0;
/*			printf("array[%i][%i] = %i\n", i, j, *(*(array + i) + j) );*/
		}
	}

	return (array);
}
