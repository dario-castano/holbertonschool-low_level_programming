#include "holberton.h"



/**
 * _strpbrk - gets the length of a prefix substring.
 * @s: Array to be scanned
 * @accept: Char to find
 *
 * Return: Pointer to the first ocurrence,
 * otherwiise NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		j++;
		}
	j = 0;
	i++;
	}

	return (0);
}
