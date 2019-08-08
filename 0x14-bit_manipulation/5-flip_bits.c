#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - flip bits of a number
 * @n: a number
 * @m: another number
 * Return: amount of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size = sizeof(n) * 8 - 1;
	unsigned int i = 0;
	int flip = 0;

	while (size >= i)
	{
		if ((m & 1) != (n & 1))
			flip++;
		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (flip);
}
