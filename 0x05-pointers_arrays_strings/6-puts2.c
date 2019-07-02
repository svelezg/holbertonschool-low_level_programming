#include "holberton.h"

/**
 * puts2 -  prints one char out of 2 of a string.
 *
 * @str: string
 * Return: void.
 *
 */
void puts2(char *str)

{
	/* local variable declaration */
	int l, i;
	char a;

	l = 0;

	while (str[l] != ('\0'))
	{
	l++;
	}

	for (i = 0 ; i < l ; i++)
	{
	if (i % 2 == 0)
		{
		a = *(str + i);
		_putchar(a);
		}
	}

	_putchar('\n');
}
