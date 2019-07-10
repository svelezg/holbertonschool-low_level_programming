#include "holberton.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 *
 * @x: number
 * @y: number
 * Return: value.
 *
 */
int _pow_recursion(int x, int y)
{
	/* base case */
	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

/*	if (x == 0)
		return (0);*/

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));

}
