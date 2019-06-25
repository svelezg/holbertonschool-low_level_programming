#include "holberton.h"
#include <stdlib.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: n number
 *Return: void.
 */
void print_to_98(int n)
{

	/* local variable declaration */
	int i;

	if (n > 98)
		{
		for (i = n ; i > 98 ; i--)
			{
			if (i > 99)
				_putchar('0' + abs(i) / 100);
			_putchar('0' + (abs(i) % 100) / 10);
			_putchar('0' + abs(i) % 10);
			_putchar(',');
			_putchar(' ');
			}
		_putchar('9');
		_putchar('8');
		}
	else if (n == 98)
		{
		_putchar('9');
		_putchar('8');
		}
	else
		{
		for (i = n ; i < 98 ; i++)
			{
			if (i < 0)
				_putchar('-');

			if (abs(i) > 9)
				_putchar('0' + abs(i) / 10);
			_putchar('0' + abs(i) % 10);
			_putchar(',');
			_putchar(' ');
			}
		_putchar('9');
		_putchar('8');
		}
	_putchar('\n');
}
