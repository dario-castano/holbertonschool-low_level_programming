#include "holberton.h"

/**
 * string_toupper - Converts a char arr to uppercase 
 * @c: Array
 * Return: Array of chars
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] -= 32;
		}
		i++;
	}

	return (c);
}
