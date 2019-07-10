#include "holberton.h"

/**
 * _puts_recursion -  Prints a string
 *
 * @s: string
 * Return: void.
 *
 */
void _puts_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}

}
