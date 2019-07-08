#include "holberton.h"

/**
 * _strpbrk -  Searches a string for any of a set of bytes.
 *
 * @s: string
 * @accept: check string
 * Return: int.
 *
 */
char *_strpbrk(char *s, char *accept)
{
	/* local variable declaration */
	unsigned int i, j;

	i = 0;
	while (*(s + i) != '\0')
		{
		j = 0;
		while (*(accept + j) != '\0')
			{
/*			printf("s[%d]=%c accept[%d]=%c",i, s[i], j, accept[j]);*/
			if (*(accept + j) == *(s + i))
				return (s + i);
			j++;
			}
		i++;
		}
	return (0);
}
