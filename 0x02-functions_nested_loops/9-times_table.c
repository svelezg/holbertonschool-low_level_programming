#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Void input
 *
 *
 */
void times_table(void)
{

	/* local variable declaration */
	int i;
	int j;
	int p;

	for (i = 0 ; i < 10 ; i++)
		{
		for (j = 0 ; j < 10 ; j++)
			{
			p = i * j;

			if (j == 0)
				_putchar('0');

			else
				{
				if (p < 10)
					_putchar(' ');
				else
					_putchar('0' + p / 10);

				_putchar('0' + p % 10);
				}

			if (j != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			else
				_putchar('\n');
			}
		}
}
