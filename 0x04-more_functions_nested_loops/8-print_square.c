#include "holberton.h"

/**
 * print_square - Print a square using #
 * @n: order of the square
 *
 * Return: void
 *
 */
void print_square(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			write_pnd_line(n);
			_putchar('\n');
		}
	}
}

/**
 * write_pnd_line - Writes a line of n pound chars
 * @n: number of pound signs
 *
 * Return: A line with n pound signs
 */
void write_pnd_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(35);
	}
}
