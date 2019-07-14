#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
* @argc: argcount
* @argv: argvector
* Return: acc
*/
int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	unsigned int acc = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		acc += (unsigned int)atoi(argv[i]);
		i++;
	}
	printf("%u\n", acc);
	return (acc);
}
