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
 * putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a < 123; a++)
		{
		putchar(a);
		}

	for (a = 'A'; a < 91; a++)
		{
		putchar(a);
		}

	putchar('\n');

	return (0);
}
