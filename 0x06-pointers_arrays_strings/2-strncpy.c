#include "holberton.h"

/**
 * _strncpy -  copies n characters of a string.
 *
 * @dest: destination string
 * @src: source string
 * @n: n bytes to use
 * Return: concatenated string.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* local variable declaration */
	int i, j;
	char *buff;

	buff = dest;

	for (j = 0 ; src[j] != '\0'; j++)
		;

	if (n < j)
		{
		for (i = 0; i < n; i++)
			{
			if (src[i] != '\0')
				dest[i] = src[i];
			else if (dest[i] != '\0')
				{
				;
				}
			}
		}
	else
		{
		for (i = 0; i < n; i++)
			{
			if (i < j)
				dest[i] = src[i];
			else
				dest[i] = '\0';
			}
		}
	return (buff);
}
