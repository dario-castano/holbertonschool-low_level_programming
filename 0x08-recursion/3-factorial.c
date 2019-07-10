#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: An integer number
 * Return: -1 if lt 0
 * otherwise the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
