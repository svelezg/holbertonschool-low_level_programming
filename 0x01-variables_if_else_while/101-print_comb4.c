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
	int n;
	int k;
	int i;
	int j;

	for (n = 48; n < 56; n++)
	{
		for (k = 49; k < 58; k++)
		{
			if (!(k < n + 1))
			{
				for (i = 48; i < 58; i++)
				{
					for (j = i; j < i + 1; j++)
					{
					if (!(j < k + 1))
						{
						putchar(n);
						putchar(k);
						putchar(j);
					if (!(j == 57 && k == 56 && n == 55))
					{
						putchar(',');
						putchar(' ');
					}
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
