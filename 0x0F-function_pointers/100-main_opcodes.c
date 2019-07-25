#include <stdlib.h>
#include <stdio.h>

/**
  * main - entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: 0
  */
int main(int argc, char **argv)
{
	int i; 
	int count;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	count = atoi(argv[1]);

	if (count < 0)
	{
		puts("Error");
		return (2);
	}

	for (i = 0; i < (count - 1); i++)
	{
		if (count != 0)
			printf("%02hhx ", ((char *)main)[i]);
	}

	printf("%02hhx\n", ((char *)main)[i]);

	return (0);
}
