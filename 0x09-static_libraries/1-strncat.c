#include "holberton.h"

/**
 * get_termination_pos - Get the array position when the
 * termination char is located
 *
 * @arr: A char array
 *
 * Return: The position of '\0'
 */
int get_termination_pos(char *arr)
{
	int i = 0;

	while (arr[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strncat - This function appends the n bytes of the src string
 * to the dest string, overwriting the terminating
 * null byte (\0) at the end of dest, and then adds a
 * terminating null byte
 *
 * @dest: Desitnation array
 * @src: Source array
 * @n: Number of bytes of src to be used
 *
 * Return: Destination array with the source appended at the end
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = get_termination_pos(dest);

	while (i < n && src[i] != '0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	dest[j] = '\0';
	return (dest);
}
