#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: number
 * Return: lenght.
 *
 */
int factorial(int n)
{
	/* base case */
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
