#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * Return : void
 */
void print_times_table(int n)
{
	int i, j, res;

	if ((n > 15) || (n < 0))
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (res < 10)
				{
					if (j == 0)
						pr_3_digit(res, 0);
					else if (j == n)
						pr_3_digit(res, 1);
					else
						pr_3_digit(res, 2);
				}
				else if ((res >= 10) && (res < 100))
				{
					if (j == n)
						pr_3_digit(res, 3);
					else
						pr_3_digit(res, 4);
				}
				else
				{
					if (j == n)
						pr_3_digit(res, 5);
					else
						pr_3_digit(res, 6);
				}
			}
		_putchar('\n');
		}
	}
}

/**
 * print_spaces - print given spaces using _putchar.
 * @n: Number of spaces
 *
 * Return : void
*/
void print_spaces(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}

/**
 * pr_3_digit - prints the n times table, starting with 0.
 * @charcode: Character code
 * @fmt: Format
 *
 * Return : void
 */
void pr_3_digit(int charcode, int fmt)
{
	switch (fmt)
	{
		case 0:
			_putchar(charcode + '0');
			_putchar(',');
			break;
		case 1:
			print_spaces(3);
			_putchar(charcode + '0');
			break;
		case 2:
			print_spaces(3);
			_putchar(charcode + '0');
			_putchar(',');
			break;
		case 3:
			print_spaces(2);
			_putchar((charcode / 10) + '0');
			_putchar((charcode % 10) + '0');
			break;
		case 4:
			print_spaces(2);
			_putchar((charcode / 10) + '0');
			_putchar((charcode % 10) + '0');
			_putchar(',');
			break;
		case 5:
			print_spaces(1);
			_putchar((charcode / 100) + '0');
			_putchar((charcode / 10) % 10 + '0');
			_putchar((charcode % 10) + '0');
			break;
		case 6:
			print_spaces(1);
			_putchar((charcode / 100) + '0');
			_putchar((charcode / 10) % 10 + '0');
			_putchar((charcode % 10) + '0');
			_putchar(',');
			break;
	}
}
