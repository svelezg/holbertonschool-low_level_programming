#include "holberton.h"

/**
 * _strncat -  concatenates two strings.
 *
 * @dest: destination string
 * @src: source string
 * @n: n bytes to use
 * Return: concatenated string.
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	/* local variable declaration */
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (j < n)
		{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\n')
			break;
		j++;
		i++;
		}

	return (dest);
}
