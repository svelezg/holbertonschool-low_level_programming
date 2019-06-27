#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	long primero = 0, segundo = 1, f = 1;
	long p1, p2, s1, s2, f1, f2;

	do {
		printf("%li, ", f);
		primero = segundo;
		segundo = f;
		f = primero + segundo;
		i++;
	} while (i < 89);

	s1 = segundo / 1000000000000;
	s2 = segundo % 1000000000000;
	f1 = f / 1000000000000;
	f2 = f % 1000000000000;

	for (i = 89 ; i < 98 ; i++)
		{
		if (f2 / 1000000000000 > 0)
			{
			f2 = f2 % 1000000000000;
			f1 = f1 + 1;
			}
		printf("%li%li", f1, f2);
		p1 = s1;
		p2 = s2;
		s1 = f1;
		s2 = f2;
		f1 = p1 + s1;
		f2 = p2 + s2;

		if (i != 97)
			printf(", ");
		}
	printf("\n");
	return (0);
}
