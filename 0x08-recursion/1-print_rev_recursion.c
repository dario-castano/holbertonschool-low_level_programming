#include "holberton.h"

/**
 * _print_rev_recursion - prints a string reversed, followed by a new line.
 * @s: an array of chars
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
	_putchar('\0');
	}
}
