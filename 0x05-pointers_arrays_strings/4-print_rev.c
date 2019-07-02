#include "holberton.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line, to stdout.
 *
 * @s: string
 * Return: void.
 *
 */
void print_rev(char *s)

{
	/* local variable declaration */
	int l, a;

	l = 0;

	while (s[l] != ('\0'))
	{
	l++;
	}

	while (l >= 0)
	{
	l--;
	a = s[l];
	_putchar(a);
	}


	 _putchar('\n');

}
