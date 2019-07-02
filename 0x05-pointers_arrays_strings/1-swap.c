#include "holberton.h"

/**
 * swap_int -  swaps the values of two integers.
 *
 * @a: first integer
 * @b: second integer
 * Return: 0.
 *
 */
void swap_int(int *a, int *b)
{
	/* local variable declaration */
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
