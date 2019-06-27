#include "holberton.h"

/**
 * print_number -  prints an integer.
 * @n: integer
 *
 * Return: void.
 *
 */
void print_number(int n)
{
	int z;

	if (n < 0)
	{
		_putchar('-');
		z = -n;
	}
	else
		z = n;

	if (z >= 100000)
		_putchar('0' + (z / 100000));
	if (z >= 10000 || n >= 100000)
		_putchar('0' + ((z % 100000) / 10000));
	if (z >= 1000 || z >= 10000)
		_putchar('0' + (((z % 100000) % 10000) / 1000));
	if (z >= 100 || z >= 1000)
		_putchar('0' + ((((z % 100000) % 10000) % 1000) / 100));
	if (z >= 10 || z >= 100)
		_putchar('0' + (((((z % 100000) % 10000) % 1000) % 100) / 10));


	_putchar('0' + ((((((z % 100000) % 10000) % 1000) % 1000) % 100) % 10));
}
