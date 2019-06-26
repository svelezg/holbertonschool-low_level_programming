#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	unsigned int primero = 0;
	unsigned int segundo = 1;
	unsigned int f = 1;

	do {
		printf("%u\n", f);
		primero = segundo;
		segundo = f;
		f = primero + segundo;
		i++;
	} while (i < 50);

	return (0);
}
