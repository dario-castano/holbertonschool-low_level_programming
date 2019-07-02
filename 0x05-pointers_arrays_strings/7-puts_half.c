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
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to a char
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int half;
	int len = _strlen(str);

	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
		for (i = half; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		half = len / 2;
		for (i = half; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
