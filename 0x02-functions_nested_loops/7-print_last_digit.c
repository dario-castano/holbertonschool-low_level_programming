#include "holberton.h"

/**
 * print_last_digit - get the last digit of an integer.
 * @n: A integer number
 *
 * Return: the last digit of an int
 *
 */
int print_last_digit(int n)
{
	int p = n % 10;

	if (p < 0)
	{
		_putchar((-1) * p + '0');
		return ((-1) * p);
	}
	else
	{
		_putchar(p + '0');
		return (p);
	}
}
