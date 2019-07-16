#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: Parameter string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int size = 0, i;
	char *string;

/*	printf("%s\n", str);*/
	if (str == NULL)
		return (NULL);

	while (*(str + size) != '\0')
		size++;

/*	printf("%i\n", size);*/
/*	printf("%s\n", str);*/

/*	if (size == 0)*/
/*		return (NULL);*/

	string = (char *) malloc(size * sizeof(char));

	if  (string == NULL)
		return (NULL);


	for (i = 0 ; i < size ; i++)
	{
	*(string + i) = *(str + i);
/*	printf("%c %c\n", *(string + i), *(str +i));*/
	}


	return (string);
}
