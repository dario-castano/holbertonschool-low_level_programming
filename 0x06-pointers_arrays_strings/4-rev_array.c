#include "holberton.h"

/**
 * get_termination_pos - Get the array position when the
 * termination char is located
 *
 * @arr: A char array
 *
 * Return: The position of '\0'
 */
int get_termination_pos(char *arr)
{
	int i = 0;

	while (arr[i] != '\0')
	{
		i++;
	}

	return (i);
}

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
	for (i = 0; i < n; i++)
	{
		a[i] = buf[i];
	}
}
