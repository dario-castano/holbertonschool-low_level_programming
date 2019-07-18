#include <stdlib.h>

/**
 * _strlen - swap the values of two integers
 * @s: pointer to a char
 * Return: number of chars
 */
int _strlen(char *s)
{
	int acc = 0;

	while (s[acc] != '\0')
	{
		acc++;
	}

	return (acc);
}

/**
 * string_nconcat - concatenates two strings
 * @s1:stirng 1
 * @s2:string 2
 * @n: n bytesofstring 2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = _strlen(s1);

	out = malloc((i + (n * sizeof(*s2) + 1) * sizeof(*out)));

	if (out == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		out[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		out[i] = s2[j];

	out[i] = '\0';
	return (out);
}
