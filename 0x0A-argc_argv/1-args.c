#include "holberton.h"
#include <stdio.h>

/**
 * main -  Prints the program name, followed by a new line.
 *
 * @argc: argument count
 * @argv: argument values vector.
 *
 * Return: 0 if succes
 */
int main(__attribute__((unused)) int argc,
__attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
