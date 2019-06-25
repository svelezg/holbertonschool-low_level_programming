#include "holberton.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Voind input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{

	/* local variable declaration */
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
