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
	int i = 2;
	int acc = 0;
	int ans = 0;
	int max = 4000000;

	while (acc < max)
	{
		if (fibonacci(i) % 2 == 0)
		{
			ans += fibonacci(i);
			acc = fibonacci(i);
			i++;
		}
		else
		{
			i++;
		}
	}

	printf("%d\n", ans);
	return (0);
}
