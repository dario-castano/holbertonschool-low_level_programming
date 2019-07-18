#include <stdlib.h>

/**
 * _strlen - swap the values of two integers
 * @s: pointer to a char
 * Return: number of chars
 */
unsigned int _strlen(char *s)
{
	int acc = 0;

	while (s[acc] != '\0')
	{
		acc++;
	}

	return (acc);
}

/**
 * _memset - fills memory with a constant byte.
 * @s: Array of chars
 * @b: char to fill
 * @n: number of instances
 * Return: Pointer to array filled with n ocurrences of b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _strncat - This function appends the n bytes of the src string
 * to the dest string, overwriting the terminating
 * null byte (\0) at the end of dest, and then adds a
 * terminating null byte
 *
 * @dest: Desitnation array
 * @src: Source array
 * @n: Number of bytes of src to be used
 *
 * Return: Destination array with the source appended at the end
 */
char *_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = _strlen(dest);

	while (i < n && src[i] != '0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	dest[j] = '\0';
	return (dest);
}

/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: array 1
 * @s2: array 2
 * @n: num of bytes of s2
 * Return: NULL if malloc fails, otherwise pointer to array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, buflen;
	char *buf;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = _strlen(s1);
	s2len = _strlen(s2);

	if (n > s2len)
		n = s2len;

	buf = (char *)malloc(sizeof(char) * (s1len + n + 1));

	if (buf == NULL)
		return (NULL);

	buflen = sizeof(buf) / sizeof(char);
	_memset(buf, '\0', buflen);

	_strncat(buf, s1, s1len);
	_strncat(buf, s2, n);

	return (buf);
}
