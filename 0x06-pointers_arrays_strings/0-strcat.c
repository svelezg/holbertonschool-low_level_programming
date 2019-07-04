#include "holberton.h"

/**
 * _strcat -  concatenates two strings.
 *
 * @dest: destination string
 * @src: source string
 * Return: concatenated string.
 *
 */
char *_strcat(char *dest, char *src)
{
	/* local variable declaration */
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0')
		{
		*(dest + i) = *(src + j);
		j++;
		i++;
		}

	return (dest);
}
