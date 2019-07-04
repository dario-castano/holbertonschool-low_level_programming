#include "holberton.h"

/**
 * _strncpy - This function copy the n bytes of the src string
 * to the dest string. overwriting the first n bytes
 *
 * @dest: Desitnation array
 * @src: Source array
 * @n: Number of bytes of src to be used
 *
 * Return: Destination array with the source appended at the end
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
