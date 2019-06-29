#include <stdio.h>
unsigned long int fib_tail(
unsigned long int n,
unsigned long int left,
unsigned long int right);

unsigned long int fibonacci(unsigned long int n);

/**
 * fibonacci - calculates fibonacci series.
 * @n: An integer
 *
 * Return: The result of fibonacci series.
 */
unsigned long int fibonacci(unsigned long int n)
{
	return (fib_tail(n, 0, 1));
}

/**
 * fib_tail - tail recursive part of fibonacci.
 * @n: An integer
 * @left: An integer
 * @right: An integer
 *
 * Return: The result of fibonacci series.
 */
unsigned long int fib_tail(
unsigned long int n,
unsigned long int left,
unsigned long int right)
{
	switch (n)
	{
		case 0:
			return (0);
		case 1:
			return (right);
		default:
			return (fib_tail(n - 1, right, left + right));
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int max = 51;

	for (i = 2; i <= max; i++)
	{
		if (i == max)
			printf("%lu", fibonacci(i));
		else
			printf("%lu, ", fibonacci(i));
	}

	putchar('\n');
	return (0);
}
