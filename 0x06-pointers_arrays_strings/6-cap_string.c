#include "holberton.h"

/**
 * isa_lowercase - Check if lowercase
 * @c: char
 * Return: 1 if lowercase,
 * otherwise 0
 */
int isa_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/**
 * isa_separator - Check if is a separator
 * @c: char
 * Return: 1 if separator,
 * otherwise 0
 */
int isa_separator(char c)
{
	if (c == 32 || c == 9 || c == 10 ||
		c == 44 || c == 59 || c == 46 ||
		c == 33 || c == 63 || c == 34 ||
		c == 28 || c == 29 || c == 123 || c == 125)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * cap_string - Capitalize words of a string
 * @str: Array of char
 * Return: Capitalized array
 */
char *cap_string(char *str)
{
	int i = 0;
	int counter = 0;

	while (str[i] != '\0')
	{
		if (isa_separator(str[i]))
		{
			if (isa_lowercase(str[i - counter]))
			{
				str[i - counter] -= 32;
				counter = -1;
			}
			else
			{
				counter = -1;
			}
		}
		i++;
		counter++;
	}

	return (str);
}
