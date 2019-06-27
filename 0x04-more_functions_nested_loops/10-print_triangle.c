#include "holberton.h"

/**
 * print_triangle -  prints a triangle
 * @size: size of the triangle
 *
 * Return: void.
 *
 */
void print_triangle(int size)
{
	int i, j, k;


	for (i = 0 ; i < size ; i++)
		{
		for (j = 2 ; j <= (size - i); j++)
			_putchar(' ');


		for (k = 0 ; k <= i ; k++)
			_putchar('#');

		_putchar('\n');
		}

	if (size <= 0)
		_putchar('\n');
}
