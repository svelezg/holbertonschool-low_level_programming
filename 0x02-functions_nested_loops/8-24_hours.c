#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Void input
 *
 *
 */
void jack_bauer(void)
{

	/* local variable declaration */
	int i;
	int j;

	for (i = 0 ; i < 24 ; i++)
		{
		for (j = 0 ; j < 60 ; j++)
			{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
			}
		}
}
