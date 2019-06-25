#include "holberton.h"
#include <stdio.h>
#define LIMIT 98

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: An integer number
 *
 * Return: prints the count from n to 98
 *
 */
void print_to_98(int n)
{
	int i;

	if (n < LIMIT)
	{
		for (i = n; i <= LIMIT; i++)
		{
			if (i == LIMIT)
				pr_with_fmt(i, 1);
			else
				pr_with_fmt(i, 0);
		}
		putchar('\n');
	}
	else
	{
		for (i = n; i >= LIMIT; i--)
		{
			if (i == LIMIT)
				pr_with_fmt(i, 1);
			else
				pr_with_fmt(i, 0);
		}
		putchar('\n');
	}
}

/**
 * pr_with_fmt - prints all natural numbers from n to 98.
 * @charcode: An integer number
 * @fmt: An integer number
 *
 * Return: prints with a predefined format
 *
 */
void pr_with_fmt(int charcode, int fmt)
{
	switch (fmt)
	{
		case 0:
			printf("%d, ", charcode);
			break;
		case 1:
			printf("%d", charcode);
			break;
	}
}
