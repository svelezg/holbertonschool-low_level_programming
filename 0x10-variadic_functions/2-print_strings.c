#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings.
 * @separator: String to be printed between the strings.
 * @n: Number of parameters.
 * @...: Parameters.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, j;


	for (i = 0; i < n; i++)
	{
		va_start(valist, n);
		for (j = 0 ; j < i; j++)
			va_arg(valist, char *);

		if (va_arg(valist, char *) == NULL)
		{
			printf("(nil)");
			va_end(valist);
		}
		else
		{
			va_start(valist, n);
			for (j = 0 ; j < i; j++)
			{
				va_arg(valist, char *);
			}
			printf("%s", va_arg(valist, char *));
			va_end(valist);
		}
		if (i == n - 1 || separator == NULL)
			;
		else
			printf("%s", separator);
	}

	/* clean memory reserved for valist */
	va_end(valist);

	printf("\n");
}

