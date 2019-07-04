#include "holberton.h"

/**
 * _strcmp -  compares two strings.
 *
 * @s1: first string
 * @s2: secong string
 * Return: integer , 0 if they match.
 *
 */
int _strcmp(char *s1, char *s2)
{
	/* local variable declaration */
	int i, n;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
		{
		n = s1[i] - s2[i];
		if (n != 0 || s2[i] == '\0')
			break;
		i++;
		}

	return (n);
}
