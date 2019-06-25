#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return : void
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if (res < 10)
			{
				if (j == 0)
					pr_digit(res, 0);
				else if (j == 9)
					pr_digit(res, 1);
				else
					pr_digit(res, 2);
			}
			else
			{
				if (j == 9)
					pr_digit(res, 3);
				else
					pr_digit(res, 4);
			}
		}
	_putchar('\n');
	}
}

/**
 * pr_digit - prints the 9 times table, starting with 0.
 * @charcode: Character code
 * @fmt: Format
 *
 * Return : void
 */
void pr_digit(int charcode, int fmt)
{
	switch (fmt)
	{
		case 0:
			_putchar(charcode + '0');
			_putchar(',');
			break;
		case 1:
			_putchar(' ');
			_putchar(' ');
			_putchar(charcode + '0');
			break;
		case 2:
			_putchar(' ');
			_putchar(' ');
			_putchar(charcode + '0');
			_putchar(',');
			break;
		case 3:
			_putchar(' ');
			_putchar((charcode / 10) + '0');
			_putchar((charcode % 10) + '0');
			break;
		case 4:
			_putchar(' ');
			_putchar((charcode / 10) + '0');
			_putchar((charcode % 10) + '0');
			_putchar(',');
			break;
	}
}
