#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long sum = 0;
	long primero = 0;
	long segundo = 1;
	long f = 1;


	do {
		if (f % 2 == 0)
			sum = sum + f;
/*		printf("%li (%li), ", f, sum);*/
		primero = segundo;
		segundo = f;
		f = primero + segundo;

	} while (f < 4000001);

	printf("%li\n", sum);

	return (0);
}
