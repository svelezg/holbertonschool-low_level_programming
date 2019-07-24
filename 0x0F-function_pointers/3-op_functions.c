#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: result
 *
 */
int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}


/**
 * op_sub - Substracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: result
 *
 */
int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}



/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: result
 *
 */
int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}


/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 * Return: result
 *
 */
int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = a / b;
	return (result);
}


/**
 * op_mod - Returns the mod of two integers
 * @a: First integer
 * @b: Second integer
 * Return: result
 *
 */
int op_mod(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = a % b;
	return (result);
}
