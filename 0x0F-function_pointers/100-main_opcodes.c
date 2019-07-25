#include <stdlib.h>
#include <stdio.h>

/**
  * main - entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int bytes;
	int i;
	unsigned char *main_arr;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		puts("Error");
		exit(2);
	}

	main_arr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", main_arr[i]);
		if (i < (bytes - 1))
			putchar(' ');
	}

	putchar('\n');
	return (0);
}
