#include "holberton.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: The character check
 * Return: 1 on uppercase, 0 otherwise..
 *
 */
int _isupper(int c)
{

	/* local variable declaration */
	int result;

	if (c > 64 && c < 91)
		result = 1;

	else
		result = 0;

	return (result);
}
