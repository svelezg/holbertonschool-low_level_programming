#include "holberton.h"

/**
 * leet -  capitalizes all words of a string
 * @a: string
 * Return: string
 *
 */
char *leet(char *a)

{
	/* local variable declaration */
	int i, j;
	char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char d[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	while (a[i] != '\0')
		{
		for (j = 0 ; j < 10 ; j++)
			{
			if (a[i] == c[j])
				a[i] = d[j];
			}
		i++;
		}

	return (a);
}
