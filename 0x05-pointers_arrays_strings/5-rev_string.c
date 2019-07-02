#include "holberton.h"

/**
 * rev_string -  reverses a string.
 *
 * @s: string
 * Return: void.
 *
 */
void rev_string(char *s)

{
	/* local variable declaration */
	int l, i, j;
	char t[30];

	l = 0;

	while (s[l] != ('\0'))
	{
	*(t + l) = *(s + l);
	l++;
	}

	j = l - 1;
	for (i = 0 ; i < l ; i++)
	{
	*(s + i) = *(t + j);
	j--;
	}

}
