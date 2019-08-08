#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"


/**
 * flip_bits - Returns the number of bits you would need to
 * flip to get from one number to another..
 * @n: number
 * @m: number
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a, b, n_bit, m_bit;
	unsigned int i, counter = 0;

	a = n;
	b = m;

	i = 0;
	while (!((a >> i) == 0 && (b >> i) == 0))
	{
		n_bit = n >> i;
		n_bit = n_bit & 1;

		m_bit = m >> i;
		m_bit = m_bit & 1;

		if (n_bit ^ m_bit)
			counter++;
		i++;
	}


	return (counter);
}

