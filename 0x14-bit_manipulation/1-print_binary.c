#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be scanned
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int index = 0;
	unsigned long int number = n;

	while ((number >>= 1) > 0)
		index++;

	while (index >= 0)
	{
		_putchar((n >> index) & 1 ? '1' : '0');
		index--;
	}
}
