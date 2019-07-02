#include "holberton.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout.
 *
 * @str: string
 * Return: void.
 *
 */
void _puts(char *str)

{
	/* local variable declaration */
	int l, a;

	l = 0;

	while (str[l] != ('\0'))
	{
	a = str[l];
	_putchar(a);
	l++;
	}
	 _putchar('\n');

}
