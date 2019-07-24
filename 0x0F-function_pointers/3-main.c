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
	int operand1;
	int operand2;
	char *operator;

	if (argc == 4)
	{
		operator = argv[2];
		operand1 = atoi(argv[1]);
		operand2 = atoi(argv[3]);

		ans = (get_op_func(operator))(operand1, operand2);

		printf("%d\n", ans);
		return (0);
	}
	else
	{
		puts("Error");
		return (98);
	}
}
