#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char p[] = "Holberton";
	int phrsize = sizeof(p) / sizeof(char);

	for (i = 0; i < phrsize; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
