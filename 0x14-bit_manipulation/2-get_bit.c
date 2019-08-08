#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: index of the binary
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;

	if (((n >> 1) << 1) == n)
		return (0);
	else
		return (1);
}
