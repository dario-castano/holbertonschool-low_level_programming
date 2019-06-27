#include "holberton.h"

/**
 * print_triangle - Print a triangle using #
 * @n: order of the square
 *
 * Return: void
 *
 */
void print_triangle(int n)
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
			put_spaces(n - (i + 1));
			put_linechars(i + 1);
			_putchar('\n');
		}
	}
}

/**
 * put_spaces - Writes n spaces
 * @n: number of spaces
 *
 * Return: n spaces
 */
void put_spaces(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}

/**
 * put_linechars - Writes n pound chars
 * @n: number of spaces
 *
 * Return: n pounds
 */
void put_linechars(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(35);
	}
}
