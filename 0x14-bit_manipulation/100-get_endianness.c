#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness -  checks the endianness
 * Return: void
 *
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ch = (char *) &n;

	if (*ch)
		return (1);

	return (0);
}
