#include "holberton.h"

/**
 * _strcat - This function appends the src string
 * to the dest string, overwriting the terminating
 * null byte (\0) at the end of dest, and then adds a
 * terminating null byte
 *
 * @dest: Desitnation array
 * @src: Source array
 *
 * Return: Destination array with the source appended at the end
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	dest[j] = '\0';
	return (dest);
}
