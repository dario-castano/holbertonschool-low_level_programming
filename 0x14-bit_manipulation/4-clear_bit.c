#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the binary number
 * @index: bit to change
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 - 1 < index)
		return (-1);

	*n = *n & (~(1 << index));
	return (1);
}
