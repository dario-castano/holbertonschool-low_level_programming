#include "sort.h"

/**
 * swap - swaps two array pointers
 * @left: A pointer
 * @right: Another pointer
 * Return: void
 */
void swap(int *left, int *right)
{
	int temp;

	temp = *left;
	*left = *right;
	*right = temp;
}

/**
 * 
 * 
 * 
 * 
 * 
 */
void merge(int *array, int left, int middle, int right)
{

}

/**
 * sort - recursive part of the merge sort array
 * 
 * 
 * 
 */
void sort(int *array, int left, int right)
{
    int middle = left + ((right - left) / 2);

    sort(array, left, middle);
    sort(array, middle, right);
    merge(array, left, middle, right);
}

/**
 * merge_sort -  sorts an array of integers in ascending order
 * using the Merge sort algorithm
 * @array: Pointer to the array
 * @size: size of the array
 * Return: void
 */
void merge_sort(int *array, size_t size)
{
    if (size < 2)
        return;
    
    sort(array, 0, size);
}