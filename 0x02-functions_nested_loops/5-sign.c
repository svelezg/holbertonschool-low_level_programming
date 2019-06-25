#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: The integer check
 * Return: 1 on lowercase, o otherwise..
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{

	/* local variable declaration */
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if  (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = -1;
		_putchar('-');
	}

	return (result);
}
