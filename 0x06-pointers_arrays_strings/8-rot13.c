#include "holberton.h"

/**
 * rot13 -  encodes a string using rot13
 * @a: string
 * Return: string
 *
 */
char *rot13(char *a)

{
	/* local variable declaration */
	int i, j;
	char c[52][2] = {{'A', 'N'}, {'B', 'O'}, {'C', 'P'}, {'D', 'Q'}, {'E', 'R'},
		{'F', 'S'}, {'G', 'T'}, {'H', 'U'}, {'I', 'V'}, {'J', 'W'},
		{'K', 'X'}, {'L', 'Y'}, {'M', 'Z'}, {'N', 'A'}, {'O', 'B'},
		{'P', 'C'}, {'Q', 'D'}, {'R', 'E'}, {'S', 'F'}, {'T', 'G'},
		{'U', 'H'}, {'V', 'I'}, {'W', 'J'}, {'X', 'K'}, {'Y', 'L'},
		{'Z', 'M'}, {'a', 'n'}, {'b', 'o'}, {'c', 'p'}, {'d', 'q'},
		{'e', 'r'}, {'f', 's'},
		{'g', 't'}, {'h', 'u'}, {'i', 'v'}, {'j', 'w'}, {'k', 'x'},
		{'l', 'y'}, {'m', 'z'}, {'n', 'a'}, {'o', 'b'}, {'p', 'c'},
		{'q', 'd'}, {'r', 'e'}, {'s', 'f'}, {'t', 'g'}, {'u', 'h'},
		{'v', 'i'}, {'w', 'j'}, {'x', 'k'}, {'y', 'l'}, {'z', 'm'}};

	i = 0;
	while (a[i] != '\0')
		{
		for (j = 0 ; j < 52 ; j++)
			{
			if (a[i] == c[j][0])
				{
				a[i] = c[j][1];
				break;
				}
			}
		i++;
		}
	return (a);
}
