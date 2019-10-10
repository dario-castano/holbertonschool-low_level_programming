#include "holberton.h"

/**
 * _strcmp - This function compares two strings
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

/**
 * _strstr - function that locates a substring.
 * @haystack: Array to be scanned
 * @needle: Substring to find
 *
 * Return: Pointer to the first ocurrence,
 * otherwiise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char buffer[512];
	int i = 0;
	int haystack_len = _strlen(haystack);
	int needle_len = _strlen(needle);

	while (i <= haystack_len - needle_len)
	{
		_strncpy(buffer, haystack + i, needle_len);
		buffer[needle_len] = 0;

		if (_strcmp(buffer, needle) == 0)
		{
			return (haystack + i);
		}
	i++;
	}

	return (0);
}
