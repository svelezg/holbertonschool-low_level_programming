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

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100 ; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
