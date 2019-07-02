#include "holberton.h"

/**
 * puts_half -  prints half of a string.
 *
 * @str: string
 * Return: void.
 *
 */
void puts_half(char *str)

{
	/* local variable declaration */
	int l, i;
	char a;

	l = 0;

	while (str[l] != ('\0'))
	{
	l++;
	}


	if (l % 2 == 0)
		{
		for (i = l / 2 ; i < l ; i++)
			{
			a = *(str + i);
			_putchar(a);
			}
		}
	else
		for (i = (l / 2) + 1 ; i < l ; i++)
			{
			a = *(str + i);
			_putchar(a);
			}

	_putchar('\n');
}
