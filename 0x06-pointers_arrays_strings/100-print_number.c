#include "holberton.h"

/**
 * print_number -  prints an integer
 * @n: string
 * Return: void
 *
 */
void print_number(int n)

{
	/* local variable declaration */
	int i, p;
	unsigned int z, d, j;

	p = 0;
	j = 1;


	if (n < 0)
	{
		_putchar('-');
		z = -n;
	}
	else
		z = n;
	d = z;

	while (d != 0)
		{
		d = d / 10;
		j = j * 10;
		p++;
	}


	for (i = 0 ; i < (p - 1) ; i++)
		{
		z = z % j;
		j = j / 10;
		_putchar('0' + (z / j));
		}

	_putchar('0' + (z % 10));


}
