#include "holberton.h"

/**
 * print_sign - check the sign of an integer.
 * @n: A integer number
 *
 * Return: 1 if is positive,
 * -1 if negative,
 * Otherwise, return 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
