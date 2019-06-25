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
	int s;

	if (n > 98)
		s = -1;
	else if (n < 98)
		s = 1;
	else
		s = 0;

	i = n;

	do {
		if (i < 0)
			_putchar('-');
		if (abs(i) > 99)
			_putchar('0' + abs(i) / 100);
		if (abs(i) > 9)
			_putchar('0' + (abs(i) % 100) / 10);
		_putchar('0' + abs(i) % 10);
		if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}

		i = i + s;
	} while (i != 98);
	if (n != 98)
		{
		_putchar('9');
		_putchar('8');
		}
	_putchar('\n');
}
