#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: String
 * @f: Pointer to function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
	else
		exit(0);
}
