#include "holberton.h"

/**
 * _pow_recursion - returns the factorial of a given number.
 * @x: An integer number (base)
 * @y: An integer number (power)
 * Return: -1 if y lt 0
 * otherwise the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		switch (y)
		{
			case 0:
				return (1);
			case 1:
				return (x);
			default:
				return (x * _pow_recursion(x, y - 1));
		}
	}
}
