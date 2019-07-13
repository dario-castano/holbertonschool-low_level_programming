#include <stdio.h>
/**
 * main - entry point
 * @argc: number of args
 * @argv: array of params
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argv && argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);
	return (0);
}
