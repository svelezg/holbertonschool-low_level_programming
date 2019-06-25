#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: The number to check
 * Return: last digit.
 *
 */
int print_last_digit(int n)
{

	/* local variable declaration */
	int result;

	result = n % 10;

	if (n >= 0)
		{
		_putchar('0' + result);
		}
	else
		{
		result = -1 * result;
		_putchar('0' + result);
		}

	return (result);
}
