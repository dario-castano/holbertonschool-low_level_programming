#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: Size of array
 * @c: starting char
 * Return: NULL if size = 0
 * otherwise an array fill with c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		char *str = malloc(sizeof(int) * size);

		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}

		return (str);
	}
}
