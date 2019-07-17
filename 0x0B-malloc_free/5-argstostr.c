#include <stdlib.h>

/**
  * _strlen - measuring string length
  * @s: string
  * Return: length
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
  * argstostr - concatenates all the arguments of your program.
  * @ac: argc
  * @av: argv
  * Return: string
  */
char *argstostr(int ac, char **av)
{
	char *out;
	int i, j, k;
	int avlen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		avlen += _strlen(av[i]) + 1;
	}

	out = malloc((avlen + 1) * sizeof(char));

	if (out == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			out[k] = av[i][j];
		}

		out[k] = '\n';
		k++;
	}

	out[k] = '\0';
	return (out);
}
