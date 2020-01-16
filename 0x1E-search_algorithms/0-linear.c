#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - linear searching algorithm
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
