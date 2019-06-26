#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: Void input
 *
 */
void print_times_table(int n)
{
	/* local variable declaration */
	int i;
	int j;

	for (i = 0 ; i <= n ; i++)
		{
		if (n > 15 || n < 0)
			break;
		for (j = 0 ; j <= n ; j++)
			{
			if (j != 0)
				{
				if (((i * j) / 100) > 0)
					_putchar('0' + ((i * j) / 100));
				else
					_putchar(' ');

				if ((((i * j) % 100) / 10) > 0 || ((i * j) / 100) > 0)
					_putchar('0' + (((i * j) % 100) / 10));
				else
					_putchar(' ');

				if (((i * j) % 10) > 0 || (((i * j) % 100) / 10) > 0 ||
				   ((i * j) / 100) > 0)
					_putchar('0' + ((i * j) % 10));
				else
					_putchar('0');
				}
			else
				_putchar('0');

			if (j != n)
				{
				_putchar(',');
				_putchar(' ');
				}
			else
				_putchar('\n');
			}
		}
}
