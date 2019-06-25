#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return : void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > 0)
			{
				_putchar((i * j) + '0');
				_putchar(',');
			}
			else
			{
				_putchar((i * j) + '0');
			}
		}
	_putchar('\n');
	}
}
