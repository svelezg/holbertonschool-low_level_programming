#include "holberton.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase.
 * @a: string
 * Return: string
 *
 */
char *string_toupper(char *a)

{
	/* local variable declaration */
	int i;
	char m;
	char b[99];

	i = 0;
	while (a[i] != '\0')
		{
		m = a[i];
		if ((m >= 64 && m <= 90) || !(m >= 97 && m <= 122))
			b[i] = m;
		else
			{
			m = m - ('a' - 'A');
			b[i] = m;
			}
		i++;
		}

	i = 0;
	while (a[i] != '\0')
		{
		a[i] = b[i];
		i++;
		}

	return (a);

}
