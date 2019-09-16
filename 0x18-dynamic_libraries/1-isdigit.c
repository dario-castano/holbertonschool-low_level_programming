#include "holberton.h"

/**
 * _isdigit - Checks if a ASCII char is a numeric digit
 * @c: An int that represents a ASCII char
 *
 * Return: 1 if is a digit,
 * otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
