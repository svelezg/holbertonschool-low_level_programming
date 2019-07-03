#include "holberton.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	int j = 0;
	char a;
	char s[40];
	int sum = 0;
	int left = 2772;

	srand(time(NULL));
	while (sum < 2772)
		{
		a = (rand() % 90) + '!';
		if (left > 126)
			{
			sum = sum + a;
			left = 2772 - sum;
			*(s + i) = a;
			}
		else if (left < 33)
			{
			*(s + i) = '\0';
			sum = 0;
			left = 2772;
			i = 0;
			}
		else
			{
			sum = 2772;
			a = left;
			*(s + i) = a;
			sum = 2772;
			left = 0;
			}
		i++;
		}
		for (j = i ; j <= 40 ; j++)
			*(s + j) = '\0';


	printf("%s", s);
	return (0);
}
