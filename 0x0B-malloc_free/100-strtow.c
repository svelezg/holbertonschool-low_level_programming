#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - Splits a string into words.
 *
 * @str: Argument count
 *
 * Return: pointer to array.
 */
char **strtow(char *str)
{

	unsigned int i, j, k, l, words;
	char **array;

	if (str == NULL || *str == '\0')
		return (NULL);


	if (*str != ' ')
		words = 1;
	else
		words = 0;
	i = 1;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != ' ' && *(str + i - 1) == ' ')
			words++;
		i++;
	}
/*	printf("%i\n", words);*/

	if (words == 0)
		return (NULL);

	array = (char **)malloc(words * sizeof(char *));
	if  (array == NULL)
		return (NULL);

	j = 0;
	i = 0;
	while (*(str + j) != '\0')
	{
		while (i < words)
		{
			k = 0;
			while (*(str + j) != ' ')
			{
/*				printf("str[%i] = %c\n", j, *(str + j));*/
				k++;
				j++;
			}
			k++;
				if (*(str + j) == ' ' && *(str + j - 1) != ' ')
				{
/*					printf("lenght[%i] = %i\n", i, k);*/
					*(array + i) = (char *) malloc(k * sizeof(char));
	                        	if  (*(array + i) == NULL)
        	                	{
                	                	free(array);
                        	        	for (l = 0 ; l < i ; l++)
                                	        	free(*(array + l));
                                		return (NULL);
				}
                        }
			if (*(str + j) != '\0')
				j++;
			else
				i++;
			if (*(str + j) != ' ' && *(str + j) != '\0')
				i++;
		}
		if (i == words)
			break;
		j++;
	}


	j = 0;
	i = 0;
	while (*(str + j) != '\0')
	{
		k = 0;
		while (i < words)
		{
			while (*(str + j) != ' ')
			{
				*(*(array + i) + k) = *(str + j);
/*				printf("array[%i][%i] = %c\n", i, k, *(*(array + i) + k) );*/
/*				printf("str[%i] = %c\n", j, *(str + j));*/
				k++;
				j++;
			}
			if (*(str + j) == ' ' && *(str + j - 1) != ' ' && j > 0)
			{
				*(*(array + i) + k) = '\0';
/*				printf("array[%i][%i] = %c\n", i, k, *(*(array + i) + k) );*/
				i++;
				k = 0;
				if (i == words)
					break;
			}
			if (i == words)
				break;
			j++;
		}
		if (i == words)
			break;
		j++;
	}
	return (array);
}
