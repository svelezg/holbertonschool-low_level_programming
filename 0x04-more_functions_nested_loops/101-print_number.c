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
	unsigned int d, i;
	unsigned int p = 0;
	unsigned int j = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	d = n;
	while (d != 0)
		{
		d = d / 10;
		j = j * 10;
		p++;
	}


	for (i = 0 ; i < (p - 1) ; i++)
		{
		n = n % j;
		j = j / 10;
		_putchar('0' + (n / j));
		}

	_putchar('0' + (n % 10));
}
