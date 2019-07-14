#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: param count
* @argv: array of args
* Return: 1 if Error, otherwise 0
*/
int main(int argc, char *argv[])
{
	int i;
	int j;
	unsigned int acc = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				puts("Error");
				return (1);
			}
		}
	acc += (unsigned int)atoi(*(argv + i));
	}
	printf("%u\n", acc);
	return (0);
}
