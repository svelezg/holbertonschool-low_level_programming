#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n >= 2)
		{
		print_binary(n / 2);
		_putchar('0' + (n % 2));
		}
	else
		_putchar('0' + (n % 2));


}

