#include "holberton.h"

/**
 * abs - calculates the absolute value of an int
 * @n: An integer
 *
 * Return: Absolute val. of n
 */
int abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}

/**
 * power - calculates the power of an int
 * @base: An integer
 * @expn: An integer
 *
 * Return: base to the power of expn
 */
int power(int base, int expn)
{
	if (expn == 0)
		return (1);
	else
		return (base * power(base, expn - 1));
}

/**
 * count_digits - calculates the number of digits of an int
 * @n: An integer
 *
 * Return: Digits of n
 */
int count_digits(int n)
{
	int count = 0;
	int res = n;

	while (res != 0)
	{
		res /= 10;
		count++;
	}

	return (count);
}

/**
 * print_number - print the number of an int
 * @n: An integer
 *
 * Return: void
 */
void print_number(int n)
{
	int i, res, digits;
	unsigned int num;

	if (n == 0)
		_putchar(48);
	if (n < 0)
	{
		res = abs(n);
		digits = count_digits(res);
		_putchar('-');
		for (i = digits; i > 0; i--)
		{
			num = abs(res / power(10, (i - 1)));
			_putchar(num + '0');
			res %= power(10, (i - 1));
		}
	}
	else
	{
		res = n;
		digits = count_digits(res);
		for (i = digits; i > 0; i--)
		{
			_putchar((res / power(10, (i - 1))) + '0');
			res %= power(10, (i - 1));
		}
	}
}
