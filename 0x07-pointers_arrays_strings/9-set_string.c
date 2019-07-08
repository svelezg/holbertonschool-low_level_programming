#include "holberton.h"
#include <stdio.h>

/**
 * set_string -  Sets the value of a pointer to a char
 *
 * @s: poiter to pointer (s1)
 * @to: pointer (s0)
 * Return: void
 *
 */
void set_string(char **s, char *to)
{
	/* local variable declaration */

	*s = to;

}
