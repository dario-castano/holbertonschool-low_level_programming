#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Performs a sum
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Performs a subtraction
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Performs a multiplication
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Performs a division
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Performs a modulo
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}

	return (a % b);
}
