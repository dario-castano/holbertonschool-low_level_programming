#include <stdio.h>
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
 * rev_string - print chars but reversed
 * @s: pointer to a char
 * Return: void
 */
char *rev_string(char *s)
{
	int i = 0;
	int len = _strlen(s);
	static char buffer[2048];

	while (len != 0)
	{
		buffer[i] = s[len - 1];
		len--;
		i++;
	}
	buffer[i] = '\0';

	return (buffer);
}

/**
 * isa_binary - checks if a string is binary
 * @str: string to be checked
 * Return: 1 is binary, 0 if not
 */
unsigned int isa_binary(char *str)
{
	while (*str != '\0')
	{
	if (*str != '0' && *str != '1')
		return (0);
		str++;
	}
	return (1);
}


/**
 * _pow_recursion - returns the factorial of a given number.
 * @x: An integer number (base)
 * @y: An integer number (power)
 * Return: -1 if y lt 0
 * otherwise the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		switch (y)
		{
			case 0:
				return (1);
			case 1:
				return (x);
			default:
				return (x * _pow_recursion(x, y - 1));
		}
	}
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	char *reversed;
	unsigned int answer = 0;
	unsigned int i = 0;
	short int ch;

	if (b == NULL)
		return (0);

	reversed = (char *)b;

	if (isa_binary(reversed) && (_strlen(reversed) <= 32))
	{
		reversed = rev_string(reversed);

		while (*reversed != '\0')
		{
			ch = *reversed - '0';
			answer += (ch * _pow_recursion(2, i));
			reversed++;
			i++;
		}

		return (answer);
	}
	else
	{
		return (0);
	}
}
