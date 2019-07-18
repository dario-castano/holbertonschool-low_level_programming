#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: amount of memory
 * Return: 98 if malloc fails,
 * otherwise pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
