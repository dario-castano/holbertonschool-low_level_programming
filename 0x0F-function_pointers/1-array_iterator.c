#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array.
 * @array: array of ints
 * @size: size of chunk
 * @action: action to take
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
