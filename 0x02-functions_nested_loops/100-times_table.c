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
			int p = i * j;
			int c = p / 100;
			int d = (p % 100) / 10;
			int u = p % 10;

			if (j != 0)
				{
				if (c > 0)
					_putchar('0' + c);
				else
					_putchar(' ');

				if (d > 0 || c > 0)
					_putchar('0' + d);
				else
					_putchar(' ');

				if (u > 0 || d > 0 || c > 0)
					_putchar('0' + u);
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
