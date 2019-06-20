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
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);

	else if (l < 6 && l != 0)
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, l);

	else
		printf(" Last digit of %d is %d and is 0\n", n, l);

	return (0);
}
