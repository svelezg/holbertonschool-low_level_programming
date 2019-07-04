#include "holberton.h"

/**
 * cap_string -  capitalizes all words of a string
 * @a: string
 * Return: string
 *
 */
char *cap_string(char *a)

{
	/* local variable declaration */
	int i;
	char m;
	char b[999];

	i = 0;
	m = a[0];
	if ((m >= 64 && m <= 90) || !(m >= 97 && m <= 122))
		b[i] = m;
	else
		{
		if (a[i - 1] == ' ' || a[i - 1] == '\n')
		m = m - ('a' - 'A');
		b[0] = m;
		}
	i = 1;

	while (a[i] != '\0')
		{
		m = a[i];
		if ((m >= 64 && m <= 90) || !(m >= 97 && m <= 122))
			b[i] = m;
		else
			{
			if (a[i - 1] == ' ' || a[i - 1] == '\n')
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
