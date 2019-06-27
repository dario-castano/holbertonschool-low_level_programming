#include <stdio.h>

/**
 * main - Print fizzbuzz
 *
 * Return: void
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("%s", "Buzz");
			else
				printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
