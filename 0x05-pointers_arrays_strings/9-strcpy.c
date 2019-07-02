#include "holberton.h"

/**
 * _strcpy - Copies the string.
 *
 * @dest: string destination
 * @src: string source
 * Return: dest
 *
 */
char *_strcpy(char *dest, char *src)

{
	int i = 0;

/*	while ((src[i] = dest[i]) != ('\0')) */
/*		i++; */



	while (src[i] != ('\0'))
	{
	*(dest + i) = *(src + i);
	i++;
	}

	return (dest);
}
