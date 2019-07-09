#include "holberton.h"
#include <stddef.h>

/**
 * _strchr -  Locates a character in a string.
 *
 * @s: string
 * @c: char
 * Return: NULL if the character is not found.
 *
 */
char *_strchr(char *s, char c)
{
	/* local variable declaration */

	while (*s++)
		{
		if (*s == c)
			return (s);
		}

	return (0);
}
