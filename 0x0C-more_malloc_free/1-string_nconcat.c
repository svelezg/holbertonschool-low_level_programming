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
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;
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
	string = malloc((l1 + n + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);

	for (i = 0 ; i < l1 ; i++)
		*(string + i) = *(s1 + i);

	for (j = 0 ; j < n; j++)
		*(string + i + j) = *(s2 + j);

	*(string + i + j) = '\0';

	return (string);
}
