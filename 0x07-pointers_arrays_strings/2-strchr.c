#include "holberton.h"

/**
 * _strchr - copies memory area.
 * @s: Array to be scanned
 * @c: Char to find
 *
 * Return: Pointer to the first ocurrence,
 * otherwiise NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	i++;
	}

	return (0);
}
