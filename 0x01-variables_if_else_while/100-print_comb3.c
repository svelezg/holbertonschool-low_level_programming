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
	int k;
	int i;
	int j;

	for (k = 48; k < 58; k++)
		{
		for (i = 48; i < 58; i++)
			{
			for (j = i; j < i + 1; j++)
				{
				if (!(j < k + 1))
					{
					putchar(k);
					putchar(j);
					if (!(j == 57 && k == 56))
						{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}

	putchar('\n');

	return (0);
}
