#include "holberton.h"

/**
 * wild - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @a: asterisk masker
 * Return: 0 or 1.
 *
 */

int wild(char *s1, char *s2, int a)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	else if (*s1 == '\0' && *s2 == '*' && *++s2 == '\0')
		return (1);

	else if (*s1 == *s2)
		return (wild(++s1, ++s2, 0));

	else
	{
		if (*s2 == '*')
		{
			return (wild(s1, ++s2, 1));
		}
		else if (a == 1)
		{
			return (wild(++s1, s2, 1));
		}
		else
			return (0);
	}
}


/**
 * wildcmp - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or 1.
 *
 */

int wildcmp(char *s1, char *s2)
{
	return (wild(s1, s2, 0));
}
