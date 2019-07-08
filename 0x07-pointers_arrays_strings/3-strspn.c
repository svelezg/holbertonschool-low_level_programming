#include "holberton.h"

/**
 * _strspn -  Gets the length of a prefix substring.
 *
 * @s: string
 * @accept: check string
 * Return: int.
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	/* local variable declaration */
	unsigned int i, j, k;
	unsigned int res = 0;

	k = 0;
	while (*(accept + k) != '\0')
		k++;

	for (i = 0 ; i <= k ; i++)
		{
		j = 0;
		while (*(accept + j) != '\0')
			{
/*			printf("s[%d]=%c accept[%d]=%c",i, s[i], j, accept[j]);*/
			if (*(accept + j) == *(s + i))
				res++;
			j++;
			}
		}
	return (res);
}
