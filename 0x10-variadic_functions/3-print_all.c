#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * check_all - Checks prints all.
 * @j: iterator
 * @format: List of types of arguments passed to the function.
 *
 */
void check_all(unsigned int j, const char * const format)
{
	int i;

	i = j + 1;
	while (*(format + i) != '\0' && (*(format + j) == 'c' ||
	*(format + j) == 'i' || *(format + j) == 'f' || *(format + j) == 's'))
	{
		if (*(format + i) == 'c' || *(format + i) == 'i' ||
		*(format + i) == 'f' || *(format + i) == 's')
		{
			printf(", ");
			break;
		}
		i++;
	}
}



/**
 * print_all - Prints all.
 * @format: List of types of arguments passed to the function.
 *
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int j = 0;
	char *string;

	if (format == NULL)
		return;

	va_start(valist, format);
	while (*(format + j) != '\0')
	{
		switch (*(format + j))
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				string = va_arg(valist, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		check_all(j, format);
	j++;
	}
	va_end(valist);
	printf("\n");
}



