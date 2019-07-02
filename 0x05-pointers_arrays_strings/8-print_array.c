#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints half of a string, followed by a new line
 * @a: pointer to an array of ints
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}

	putchar('\n');
}
