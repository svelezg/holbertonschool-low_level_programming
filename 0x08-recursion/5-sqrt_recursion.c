#include "holberton.h"

/**
 * sqrr - Returns the natural square root of a number
 * otherwise return 0.
 *
 * @z: number
 * @i: increment
 * Return: value.
 *
 */
int sqrr(int i, int z)
{

	if (i * i == z)
		return (i);

	else if (i *  i > z)
		return (-1);

	else
		i++;
		return (sqrr(i, z));
}


/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: number
 * Return: value.
 *
 */
int _sqrt_recursion(int n)
{
	/* base case */
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);


	if (n == 1)
		return (1);

	else
		{
		return (sqrr(2, n));
		}

}
