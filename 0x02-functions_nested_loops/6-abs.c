#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: The integer check
 * Return: 1 on lowercase, o otherwise..
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int i)
{

	/* local variable declaration */
	int result;

	if (i >= 0)
		result = i;
	else
		result = -i;

	return (result);
}
