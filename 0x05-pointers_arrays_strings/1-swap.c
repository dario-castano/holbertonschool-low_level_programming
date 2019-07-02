#include "holberton.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer to an int
 * @b: pointer to an int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
