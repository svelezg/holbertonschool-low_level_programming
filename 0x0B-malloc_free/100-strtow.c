#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * word_count - Counts words in a string.
 * @str: Argument count
 * Return: Number of words.
 */
unsigned int word_count(char *str)
{
	unsigned int words, i;

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
/*	printf("words = %i\n", words);*/
	return (words);
}


/**
 * alloc_words - memory allocation for words.
 * @str: Argument count
 * @words: Number of words
 * Return: Ponter to array
 */
char **alloc_words(char *str, unsigned int words)
{
	unsigned int i = 0, j = 0, k, l;
	char **array;

	array = (char **)malloc((words + 1) * sizeof(char *));
	if  (array == NULL)
		return (NULL);

	while (i < words && *(str + j) != '\0')
	{
		k = 0;
		while (*(str + j) != ' ')
		{
/*		printf("str[%i] = %c\n", j, *(str + j));*/
			k++;
			j++;
		}
		k++;
		if (*(str + j) == ' ' && *(str + j - 1) != ' ' && j != 0)
		{
/*			printf("lenght[%i] = %i\n", i, k);*/
			*(array + i) = (char *) malloc(k * sizeof(char));
			if  (*(array + i) == NULL)
			{
				free(array);
				for (l = 0 ; l < i ; l++)
					free(*(array + l));
				return (NULL);
			}
			else
			{
/*				printf("Allocated array[%i] with size %i\n", i, k);*/
				k = 0;
				i++;
			}
		}
		j++;
	}

	return (array);
}


/**
 * strtow - Splits a string into words.
 * @str: Argument count
 * Return: pointer to array.
 */
char **strtow(char *str)
{

	unsigned int i = 0, j = 0, k, words;
	char **array;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = word_count(str);
/*	printf("%i\n", words);*/

	array = alloc_words(str, words);

	while (*(str + j) != '\0' && i < words)
	{
		k = 0;
		while (*(str + j) != ' ')
		{
			*(*(array + i) + k) = *(str + j);
/*			printf("array[%i][%i] = %c\n", i, k, *(*(array + i) + k) );*/
/*			printf("str[%i] = %c\n", j, *(str + j));*/
			k++;
			j++;
		}
		if (*(str + j) == ' ' && *(str + j - 1) != ' ' && j > 0)
		{
			*(*(array + i) + k) = '\0';
/*			printf("array[%i][%i] = %c\n", i, k, *(*(array + i) + k));*/
			i++;
			k = 0;
		}
		j++;
	}
	return (array);
}
