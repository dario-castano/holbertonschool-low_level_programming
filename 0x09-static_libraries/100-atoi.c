#include "holberton.h"

/**
 * isa_number - check if is a number
 * @c: char
 * Return: 1 if is a number,
 * otherwise 0
*/
int isa_number(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/**
 * power_int - Calculates the power of an int
 * @x: int
 * @y: int
 * Return: x to power y
*/
int power_int(int x, int y)
{
	int i = 0;
	int ans = 1;

	for (i = 0; i < y; i++)
	{
		ans *= x;
	}

	return (ans);
}

/**
 * sum_int_overflows - Check if a sum overflows
 * @a: int
 * @b: int
 * Return: 1 if overflows,
 * otherwise 0
*/
int sum_int_overflows(int a, int b)
{
	if ((b > 0 && a > 2147483647 - b) ||
		(b < 0 && a < -2147483648 - b))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * count_digits - Count the numbers of an array
 * from a given start (grouped)
 * @arr: Array of chars
 * @start: Starting position
 * Return: Number of digits
*/
int count_digits(char *arr, int start)
{
	int res = 0;
	int i = start;

	while (isa_number(arr[i]))
	{
		res++;
		i++;
	}

	return (res);
}

/**
 * _atoi - Atoi implementation
 * @s: Array of chars
 * Return: A number, 0 if
 * overflows int or not numbers
*/
int _atoi(char *s)
{
	int digits;
	int i = 0;
	int j = 0;
	int k = 0;
	int sign = 1;
	int acc = 0;
	int factor = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else if (isa_number(s[i]))
		{
			digits = count_digits(s, i);
			j = digits - 1;

			if (digits > 10)
			{
				break;
			}
			else
			{
				for (k = i; k < i + digits; k++)
				{
					factor = sign * (s[k] - '0') * power_int(10, j);
					if (!(sum_int_overflows(acc, factor)))
					{
						acc += factor;
						j--;
					}
					else
					{
						acc = 0;
						break;
					}
				}
			break;
			}
		}
		else
		{
			i++;
		}
	}

	return (acc);
}
