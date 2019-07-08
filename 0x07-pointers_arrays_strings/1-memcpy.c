#include "holberton.h"

/**
 * _memcpy -  copies memory area.
 *
 * @dest: string
 * @src: source
 * @n: number of bytes
 * Return: dest.
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* local variable declaration */
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
