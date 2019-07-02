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
void rev_string(char *s)
{
	int i = 0;
	int len = _strlen(s);
	char buffer[512];

	while (len != 0)
	{
		buffer[i] = s[len - 1];
		len--;
		i++;
	}
	while (i != 0)
	{
		s[len] = buffer[len];
		len++;
		i--;
	}
}
