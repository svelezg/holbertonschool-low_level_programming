#include "holberton.h"

/**
 * _strchr -  Locates a character in a string.
 *
 * @s: string
 * @c: char
 * Return: c.
 *
 */
char *_strchr(char *s, char c)
{
	/* local variable declaration */
	unsigned int i = 0;
	char *res;

	while (*(s + i) != '\0')
		{
		if (*(s + i) == c)
			{
			res = s + i;
			break;
			}
		else
			res = 0;
		i++;
		}
	return (res);
}
