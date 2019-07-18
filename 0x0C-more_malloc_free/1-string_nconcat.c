#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat -  Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: number of charcater to concatenate
 * Return: returns a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, l = 0, i = 0, j = 0, k = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + l1) != '\0')
		l1++;
	while (*(s1 + l2) != '\0')
		l2++;
	if (n >= l2)
		n = l2;
	l = l1 + n + 1;
	string = malloc(l * sizeof(char));
	if (string == NULL)
		return (NULL);

	while (i < l)
	{
		if (i < l1)
		{
			*(string + i) = *(s1 + j);
			i++;
			j++;
		}
		else if (i < l - 1)
		{
			*(string + i) = *(s2 + k);
			i++;
			k++;
		}
		else
			{
			*(string + i) = '\0';
			i++;
			}
	}
	return (string);
}
