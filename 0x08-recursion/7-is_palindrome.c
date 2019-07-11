#include "holberton.h"

/**
 * _lenght - Returns 1 if the input integer is a prime number,
 *
 * @s: string
 * Return: value.
 *
 */
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _lenght(++s));
}

/**
 * palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: string
 * @i: counter
 * Return: 0 or 1.
 *
 */

int palindrome(int i, char *s)
{

	if (*s == '\0')
		return (1);

	if (*s != *(s + _lenght(s) - i))
		return (0);
	else
		return (palindrome(++i, ++s));
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: string
 * Return: 1 for yes 0 for no.
 *
 */
int is_palindrome(char *s)
{
	return (palindrome(1, s));
}
