#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * change -  Prints the minimum number of coins to make change.
 *
 * @n: amount
 * @i: index.
 * @c: cents.
 *
 * Return: Amount of cents
 */
int change(int n, int i, int c)
{
	int m[] = {25, 10, 5, 2, 1};

	if (i > 4)
		return (0);

	if (n > 25)
		c = n / 25;

/*	printf("i = %i, m = %i, n = %i, c = %i\n", i, m[i], n, c);*/

	if (n % *(m + i) == 0)
		{
		printf("%i\n", c);
		c += n / *(m + i);
		return (0);
		}
	else
	{
		n = n % *(m + i);
		c += n / *(m + i + 1);
		return (change(n, ++i, c));
	}
}


/**
 * main -  Prints the minimum number of coins to make change.
 *
 * @argc: argument count
 * @argv: argument values vector cents.
 *
 * Return: Amount of cents
 */
int main(__attribute__((unused)) int argc,
__attribute__((unused)) char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	n = atoi(argv[1]);
	return (change(n, 0, 0));
}

