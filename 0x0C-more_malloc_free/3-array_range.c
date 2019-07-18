#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: NULL if min > max, otherwise buf
 */
int *array_range(int min, int max)
{
	int i, dist;
	int *buf;

	if (min > max)
		return (NULL);

	dist = (max - min) + 1;
	buf = malloc(dist * sizeof(int));

	if (buf == NULL)
		return (NULL);

	for (i = 0; i <= dist; i++)
	{
		buf[i] = min;
		min++;
	}

	return (buf);
}
