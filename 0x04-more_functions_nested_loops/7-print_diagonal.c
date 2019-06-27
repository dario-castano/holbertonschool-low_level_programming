#include "holberton.h"

/**
 * print_diagonal - Print a line of underscores
 * @n: amount of spaces before diagonal
 *
 * Return: void
 *
 */
void print_diagonal(int n)
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
			put_spaces(i);
			_putchar(92);
			_putchar('\n');
		}
	}
}

/**
 * put_spaces - Print a line of spaces
 * @n: amount of spaces
 *
 * Return: void
 *
 */
void put_spaces(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(32);
	}
}

