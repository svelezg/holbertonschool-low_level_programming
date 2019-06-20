#include <stdlib.h>
#include <time.h>
#include <stdio.h>

	/*
	 * This is the preferred style for multi-line
	 * comments in C source code.
	 * Please use it consistently.
	 * Positive anything is better than negative nothing.
	 */

/**
 * main - Entry point
 *
 * if  and else if statatements
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);

	else if (n < 0)
		printf("%d is negative\n", n);

	else if (n == 0)
		printf("%d is zero'n", n);

	return (0);
}
