#include "sort.h"

/**
 * get_digits_largest - 
 * @array:
 * @size:
 * Return:
 */
int get_digits_largest(int *array, size_t size)
{
	int number;
	int digits;
	size_t i;

	number = 0;
	digits = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > number)
			number = array[i];
	}

	while (number != 0)
	{
		number /= 10;
		digits++;
	}
	
	return (digits);
}

/**
 * get_digit - get a spefic digit of a number
 * @number:
 * @digit:
 * Return:
 */
int get_digit(int number, int digit)
{
	int den, dig, i;

	dig = digit - 1;
	den = 1;

	for (i = 0; i < dig; i++)
		den *= 10;
	
	return ((number / den) % 10);
}

/**
 * radix_sort - sorts an array of integers
 * in ascending order using the Radix sort algorithm
 * @array:
 * @size:
 * Return:
 */
void radix_sort(int *array, size_t size)
{
	int value;
	int *buckets, *result;
	size_t i, j, max_iters;

	if (array == NULL || size < 2)
		return;

	buckets = calloc(10, sizeof(int));
	result = malloc(sizeof(int) * size);

	if (!buckets || !result)
		return;

	max_iters = get_digits_largest(array, size);

	for (i = 1; i <= max_iters; i++)
	{
		for (j = 0; j < size; j++)
			{
				value = get_digit(array[j], i);
				buckets[value] += 1;
			} 
		for (j = 1; j < 10; j++)
			buckets[j] = buckets[j - 1] + buckets[j];
		for (j = size - 1; j > 0; j--)
		{
			value = buckets[get_digit(array[j], i)];
			buckets[get_digit(array[j], i)] -= 1;
			result[value] = array[value];
		}
		for (j = 0; j < size; j++)
			array[j] = result[j];
		print_array(array, size);
	}

	free(buckets);
	free(result);
}
