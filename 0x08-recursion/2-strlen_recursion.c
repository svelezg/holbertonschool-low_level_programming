#include "holberton.h"

/**
 * _strlen_recursion -  Returns the length of a string
 *
 * @s: string
 * Return: lenght.
 *
 */
int _strlen_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(++s));

}
