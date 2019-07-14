#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of n arguments
 * @argc: args
 * @argv: array of args
 * Return: sum if success, 1 if error
**/

int main(int argc, char **argv)
{

int i;
unsigned int acc = 0;

for (i = 1; i < argc; i++)
{
	if (*argv[i] >= 48 && *argv[i] <= 57)
		acc += (unsigned int)atoi(argv[i]);
	else
	{
		printf("Error\n");
		return (1);
	}
}
printf("%u\n", acc);

return (acc);
}
