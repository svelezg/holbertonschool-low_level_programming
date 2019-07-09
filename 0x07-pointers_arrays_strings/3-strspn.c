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
	int i, j, k, l;
	unsigned int res = 0;

	k = 0;
	while (*(accept + k) != '\0')
		k++;

	l = 0;
	while (*(s + l) != '\0')
		l++;

	for (i = 0 ; i < l ; i++)
	{
		for (j = 0 ; j <= k ; j++)
		{
/*			printf("s[%d]=%c accept[%d]=%c\n",i, s[i], j, accept[j]);*/
			if (*(s + i) == *(accept + j))
			{
				res++;
				break;
			}
			if (*(accept + j) == '\0')
				return (res);
		}
	}
	return (res);
}
