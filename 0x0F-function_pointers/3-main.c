#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Status value
 */
int main(int argc, char **argv)
{
	int ans;

	if (argc == 4)
	{
		ans = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

		printf("%d\n", ans);
		return (0);
	}
	else
	{
		puts("Error");
		exit(98);
	}
}
