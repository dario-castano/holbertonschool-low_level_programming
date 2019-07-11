#include "holberton.h"

int _sqrt(int i, int num);
int _abs(int x);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to test
 * Return: sqrt of the number
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (_sqrt(i + 1, n));
}

/**
 * _sqrt - returns the guess sqrt using a guess.
 * @x: guess
 * @y: number
 * Return: an integer
 */
int _sqrt(int x, int y)
{
	if ((x * x) > _abs(y))
		return (-1);
	else if ((x * x) == y)
		return (x);
	else
		return (_sqrt(x + 1, y));
}

/**
 * _abs - absolute value.
 * @x: number
 * Return: an integer
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return ((-1) * x);
}
