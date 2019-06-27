#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;
	long a;

	for (a = 2 ; a < n ; a++)
		{
		if (n % a == 0)
			n = n / a;
		}

	printf("%li\n", a);
	return (0);
}
