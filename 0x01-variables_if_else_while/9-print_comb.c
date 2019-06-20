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
	int i;
	int j;

	for (i = 48; i < 58; i++)
		{
		for (j = i; j < i + 1; j++)
			{
			putchar(j);
			}
		if (j != 58)
		{
			putchar(',');
			putchar(' ');
		}
		}

	putchar('\n');

	return (0);
}
