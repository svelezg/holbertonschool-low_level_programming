#include "holberton.h"
#include <stdlib.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: n number
 *Return: void.
 */
void print_to_98(int n)
{

	/* local variable declaration */
	int i;

	for (i = n ; i < 99 ; i++)
		{
		if ((abs(i) < 10) && (i < 0))
			{
			_putchar(' ');
			_putchar('-');
			_putchar('0' + abs(i));
			}

		else if ((abs(i) < 10) && (i >= 0))
			{
			_putchar(' ');
			_putchar('0' + abs(i));
			}

		else if ((abs(i) >= 10) && (i > 0))
			{
			_putchar('0' + abs(i) / 10);
			_putchar('0' + abs(i) % 10);
			}
		else
			{
			_putchar('-');
			_putchar('0' + abs(i) / 10);
			_putchar('0' + abs(i) % 10);
			}
		if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	_putchar('\n');

}
