#include "holberton.h"

/**
 * _memset -  fills memory with a constant byte..
 *
 * @s: string
 * @b: char
 * @n: number of bytes
 * Return: s.
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* local variable declaration */
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
		*(s + i) = b;

	return (s);
}
