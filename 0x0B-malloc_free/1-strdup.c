#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - swap the values of two integers
 * @s: pointer to a char
 * Return: number of chars
 */
int _strlen(char *s)
{
	int acc = 0;

	while (s[acc] != '\0')
	{
		acc++;
	}
	return (acc);
}

/**
 * _strcpy - like string copy but homemade
 * @dest: pointer to a char (destination)
 * @src: pointer to a char (source)
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int srclen = _strlen(src);

	for (i = 0; i <= srclen; i++)
	{
		if (i == srclen)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}

	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Array of chars
 *
 * Return: NULL if string is NULL or error
 * otherwise pointer to the duped arr
 */
char *_strdup(char *str)
{
	if (str == 0)
	{
		return (0);
	}
	else
	{
		char *out = malloc(sizeof(char) * _strlen(str));

		if (out != 0)
		{
			_strcpy(out, str);
			return (out);
		}
		else
		{
			return (0);
		}
	}
}
