#include <stdio.h>

/**
 * fibonacci - check the code for Holberton School students.
 * @n: An integer
 *
 * Return: The result of fibonacci series.
 */
unsigned long long int fibonacci(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int max = 50;

	for (i = 0; i < max; i++)
	{
		if (i == 0)
			continue;
		else if (i == (max - 1))
			printf("%llu", fibonacci(i));
		else
			printf("%llu, ", fibonacci(i));
	}

	putchar('\n');
}
