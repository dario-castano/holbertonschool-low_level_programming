#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * binary_to_uint - converts binary to unsigned int
  * @b: binary str
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num <<= 1;

		if (b[i] == '1')
			num ^= 1;
		i++;
	}

	return (num);
}
