#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	long primero = 0;
	long segundo = 1;
	long f = 1;

	do {
		printf("%li, ", f);
		primero = segundo;
		segundo = f;
		f = primero + segundo;
		i++;
	} while (i < 49);

	printf("%li\n", f);

	return (0);
}
