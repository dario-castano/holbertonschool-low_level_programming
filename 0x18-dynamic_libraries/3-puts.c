#include "holberton.h"

/**
 * _puts - swap the values of two integers
 * @str: pointer to a char
 * Return: void
 */
void _puts(char *str)
{
	int acc = 0;

	while (str[acc] != '\0')
	{
		_putchar(str[acc]);
		acc++;
	}
	_putchar('\n');
}
