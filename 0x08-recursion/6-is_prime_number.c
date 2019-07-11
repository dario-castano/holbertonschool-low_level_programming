#include "holberton.h"

int prime_num(int i, int num);
int _abs(int x);

/**
 * is_prime_number - calculates a prime
 * @n: an integer
 * Return: 1 if is prime
 * otherwise 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (prime_num(i, n));
}

/**
 * prime_num - look for a prime
 * @i: integer
 * @num: number to test
 * Return: an integer
 */
int prime_num(int i, int num)
{
	if (num % i == 0)
		return (0);
	else if ((i * i) > _abs(num))
		return (1);
	else
		return (prime_num(i + 1, num));
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
