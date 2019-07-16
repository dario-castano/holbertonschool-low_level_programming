#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - Get the array position when the
 * termination char is located
 *
 * @arr: A char array
 *
 * Return: The position of '\0'
 */
int _strlen(char *arr)
{
	int i = 0;

	while (arr[i] != '\0')
	{
		i++;
	}

	return (i);
}

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

/**
 * str_concat - concatenates two strings.
 * @s1: array of chars
 * @s2: array of chars
 * Return: concatenated array
 */
char *str_concat(char *s1, char *s2)
{
	char *buf;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	buf = malloc((sizeof(char) * (_strlen(s1) + _strlen(s2))) + 1);

	if (buf == NULL)
		return (NULL);

	buf[0] = '\0';

	_strcat(buf, s1);
	_strcat(buf, s2);

	return(buf);
}
