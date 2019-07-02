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
 * print_rev - print chars but reversed
 * @s: pointer to a char
 * Return: void
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len != 0)
	{
		_putchar(s[len - 1]);
		len--;
	}

	_putchar('\n');
}
