#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 * @array: Array to check
 * @size: size of array
 * @cmp: function used to compare
 * Return: index of first successful comparation
 * otherwise, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
