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
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Array of chars
 *
 * Return: NULL if string is NULL or error
 * otherwise pointer to the duped arr
 */
char *_strdup(char *str)
{
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int len = _strlen(str);
		char *out = malloc(sizeof(char) * (len + 1));

		if (out == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < len; i++)
		{
			*(out + i) = *(str + i);
		}
		*(out + i) = '\0';

		return (out);
	}
}
