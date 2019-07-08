#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Array of chars
 * @b: Char to be filled with
 * @n: Number of chars
 *
 * Return: Pointer to array filled with n ocurrences of b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
