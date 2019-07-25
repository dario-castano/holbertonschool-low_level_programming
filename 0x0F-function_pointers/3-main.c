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
	int operand1, operand2;
	int (*op)(int operand1, int operand2);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);

	printf("%d\n", op(operand1, operand2));
	return (0);
}
