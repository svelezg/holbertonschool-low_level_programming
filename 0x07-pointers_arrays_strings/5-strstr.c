#include "holberton.h"

/**
 * _strstr -  Locates a substring.
 *
 * @haystack: String
 * @needle: Substring
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 *
 */
char *_strstr(char *haystack, char *needle)
{
	/* local variable declaration */
	unsigned int i, j, k, l;

	k = 0;
	while (*(needle + k) != '\0')
		k++;

	l = 0;
	while (*(haystack + l) != '\0')
		l++;

	for (i = 0 ; i < l ; i++)
	{
		for (j = 0 ; j < k ; j++)
		{
			if (*(needle + j) != *(haystack + i + j))
				break;
			if (j == k - 1)
				return (haystack + i);
			if (i + j == l - 1)
				return (0);
		}

	}
	return (0);
}
