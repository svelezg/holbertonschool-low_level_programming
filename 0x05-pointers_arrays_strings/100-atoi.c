#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: string source
 * Return: int
 *
 */
int _atoi(char *s)

{
	int i = 0;
	int j = 0;
	int k = 0;
	char c;
	int n = 0;
	int d = 1;

	while (s[i] != ('\0'))
	{
	i++;
	}

	for (j = 0 ; j <= i ; j++)
		{
		c = *(s + j);

		if (c >= '0' && c <= '9')
			k = j;
		else if (k != 0)
			break;
		}

	i = k + 1;
	while (i > 0)
		{
		i--;
		c = *(s + i);

		if (c == '-')
			n = n * (-1);

		if (c >= '0' && c <= '9')
			{
			n = n + d * (c - '0');
			d = d * 10;
			}
		}

	return (n);
}
