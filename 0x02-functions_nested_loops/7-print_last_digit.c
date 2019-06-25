#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: The number to check
 * Return: last digit.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{

	/* local variable declaration */
	int result;

	if (n >= 0)
		{
		result = n % 10;
		_putchar('0' + result);
		}
	else
		{
		result = -n % 10;
		_putchar('0' + result);
		}

	return (result);
}
