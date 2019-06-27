#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: The character check
 * Return: 1 if c is a digit, 0 otherwise..
 *
 */
int _isdigit(int c)
{
	/* local variable declaration */
	int result;

	if (c > 47 && c < 58)
		result = 1;

	else
		result = 0;

	return (result);
}
