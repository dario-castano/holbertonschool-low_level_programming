#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: Destination array
 * @src: Source array
 * @n: Number of bytes to copy
 *
 * Return: Pointer to array filled with the copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
