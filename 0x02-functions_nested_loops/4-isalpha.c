#include "holberton.h"

/**
 * _isalpha - checks for lowercase character
 *
 * @c: The character check
 * Return: 1 on lowercase, o otherwise..
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{

	/* local variable declaration */
	int result;

	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		result = 1;

	else
		result = 0;

	return (result);
}
