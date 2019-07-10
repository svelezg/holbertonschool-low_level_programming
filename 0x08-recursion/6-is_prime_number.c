#include "holberton.h"

/**
 * prime - Returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @z: number
 * @i: increment
 * Return: value.
 *
 */
int prime(int i, int z)
{
	if (z == i)
		return (1);

	if (z % i == 0)
		return (0);

	else
		return (prime(i + 1, z));
}



/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: number
 * Return: value.
 *
 */
int is_prime_number(int n)
{
	/* base case */
	if (n <= 1)
		return (0);

	return (prime(2, n));

}
