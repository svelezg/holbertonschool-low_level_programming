#include "holberton.h"

/**
 * print_diagonal -  draws a draws a diagonal line of n characters
 * @n: lenght of line
 *
 * Return: void.
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
		{
		for (j = 0 ; j < i ; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
		}

	if (n <= 0)
		_putchar('\n');
}
