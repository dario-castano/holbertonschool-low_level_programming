#include <stdio.h>


/**
 * largest_prime_factor - check the code for Holberton School students.
 * @a: A number
 *
 * Return: Always 0.
 */
unsigned long int largest_prime_factor(unsigned long int a)
{
	unsigned long int b = 2;

	while (a > b)
	{
		if (a % b == 0)
		{
			a = a / b;
			b = 2;
		}
		else
			b++;
	}
	return (b);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%lu\n", largest_prime_factor(612852475143));
	return (0);
}
