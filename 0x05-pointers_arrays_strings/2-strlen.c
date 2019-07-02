#include "holberton.h"

/**
 * _strlen -  returns the length of a string.
 *
 * @s: string
 * Return: lenght of a strig..
 *
 */
int _strlen(char *s)
{
	/* local variable declaration */
	int l;

	l = 0;

	while (s[l] != ('\0'))
	{
	l++;
	}

	return (l);

}
