#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers.
 * @separator: String to be printed between the strings.
 * @n: Number of parameters.
 * @...: Parameters.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;


	/* initialize valist for n number of arguments */
	va_start(valist, n);


	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(valist, int));
		if (i == n - 1 || separator == NULL)
			;
		else
			printf("%s", separator);
	}

	/* clean memory reserved for valist */
	va_end(valist);

	printf("\n");
}

