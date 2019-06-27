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


	if (n < 0)
		{
		 _putchar('-');
		n = -n;
		}
	else
		continue;

	if (n > 1000)
		_putchar('0' + (n / 1000));
	if (n > 100 || n > 1000)
		_putchar('0' + ((n % 1000) / 100));
	if (n > 10 || n > 100)
		_putchar('0' + (((n % 1000) % 100) / 10));

	_putchar('0' + ((((n % 1000) % 100) % 10)));
}
