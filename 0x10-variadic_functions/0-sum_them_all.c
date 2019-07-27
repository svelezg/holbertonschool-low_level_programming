#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Sum of all its parameters.
 * @n: Number of parameters.
 * @...: Parameters.
 * Return: sum:
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	return (0);

	/* initialize valist for n number of arguments */
	va_start(valist, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
	sum += va_arg(valist, int);


	/* clean memory reserved for valist */
	va_end(valist);

	return (sum);
}

