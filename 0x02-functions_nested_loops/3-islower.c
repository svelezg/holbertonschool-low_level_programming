#include "holberton.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: The character check
 * Return: 1 on lowercase, o otherwise..
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{

	/* local variable declaration */
	int result;

	if (c > 96 && c < 123)
		result = 1;

	else
		result = 0;

	return (result);
}
