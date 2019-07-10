#include "holberton.h"

/**
 * _print_rev_recursion -  Prints a string in reverse.
 *
 * @s: string
 * Return: void.
 *
 */
void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		s--;
	}
	else
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}

}
