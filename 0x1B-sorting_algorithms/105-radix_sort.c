#include "sort.h"

int get_digit(int number, int digit)
{
	
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
	int *buckets, *result;

	if (array == NULL || size < 2)
		return;

	buckets = malloc(sizeof(int) * 10);
	result = malloc(sizeof(int) * size);




}