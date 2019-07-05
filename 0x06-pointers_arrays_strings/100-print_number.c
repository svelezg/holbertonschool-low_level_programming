#include "holberton.h"

/**
 * print_number -  prints an integer
 * @n: intiger
 * Return: void
 *
 */
void print_number(int n)

{
	/* local variable declaration */
	unsigned int z;

	if (n < 0)
		{
		_putchar('-');
		z = -n;
		}
	else
		z = n;

	if (z >= 10)
		{
		print_number(z / 10);
		_putchar('0' + (z % 10));
		}
	else
		_putchar('0' + (z % 10));


}
