#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of params
 * Return: 0 success, 1 failure
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
