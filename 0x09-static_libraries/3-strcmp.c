#include "holberton.h"

/**
 * _strcmp - This function copy the n bytes of the src string
 * to the dest string. overwriting the first n bytes
 *
 * @s1: first array
 * @s2: second array
 *
 * Return: 15 if first different comparation s1[i] are gt s2[i]
 * -15 if first different comparation s1[i] are lt s2[i]
 * 0 if equals
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (-1 * (s2[i] - s1[i]));
		i++;
	}
	return (res);
}
