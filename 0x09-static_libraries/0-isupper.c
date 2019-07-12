#include "holberton.h"

/**
 * _isupper - Checks if a ASCII char is an uppercase letter
 * @c: An int that represents a ASCII char
 *
 * Return: 1 if uppercase,
 * otherwise 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
