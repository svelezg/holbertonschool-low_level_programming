#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer should point to a new string.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0, i;
	char *string;

/*	printf("%s\n", s1);*/
/*	printf("%s\n", s2);*/
	while (*(s1++) != '\0')
		size1++;

	while (*(s2++) != '\0')
		size2++;

/*	printf("%i\n", size1);*/
/*	printf("%i\n", size2);*/
	s1 = s1 - (size1 + 1);
	s2 = s2 - (size2 + 1);
/*	printf("%s\n", s1);*/
/*	printf("%s\n", s2);*/
	string = (char *) malloc((size1 + size2 - 1) * sizeof(char));

	if  (string == NULL)
	{
/*		printf("Error\n");*/
		return (NULL);
	}
	for (i = 0 ; i < size1 ; i++)
	{
	*(string + i) = *(s1 + i);
/*	printf("%c %c\n", *(string + i), *(s1 +i));*/
	}
/*	printf("%s\n", string);*/
	for (i = 0 ; i < size2 ; i++)
	{
	*(string + i + size1) = *(s2 + i);
/*	printf("%c %c\n", *(string + i + size1), *(s2 + i));*/
	}
/*	printf("%s\n", string);*/
	return (string);
}
