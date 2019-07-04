#include "holberton.h"

/**
 * reverse_array - Reverse a given array
 *
 * @a: Source array
 * @n: Number of bytes of src to be used
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int buf[1024];
	int i = 0;
	int j = 0;

	for (i = n - 1; i > 0; i--)
	{
		buf[j] = a[i];
		j++;
	}
	for (i = 0; i < n - 1 ; i++)
	{
		a[i] = buf[i];
	}
}
