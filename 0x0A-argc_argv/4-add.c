#include <stdio.h>
#include <stdlib.h>

/**
* isa_positive_number - check if a string is a positve number
* @str: array of chars
* Return: 1 if number, 0 if not
*/
int isa_positive_number(char *str)
{
	if (*str)
	{
		if (*str < 48 || *str > 57)
			return (0);
		else
			return (isa_positive_number(str + 1));
	}
	return (1);
}

/**
* isa_negative_number - check if a string is a negative number
* @str: array of chars
* Return: 1 if number, 0 if not
*/
int isa_negative_number(char *str)
{
	if (*str == 45 && isa_positive_number(str + 1))
		return (1);
	else
		return (0);
}

/**
* has_only_numbers - shows if an array contain only numbers
* @arr: An array of chars
* Return: 1 if has only numbers,
* otherwise 0
*/
int has_only_numbers(char **arr)
{
	if (*arr != 0)
	{
		if (!isa_positive_number(*arr) && !isa_negative_number(*arr))
			return (0);
		else
			return (has_only_numbers(arr + 1));
	}
	return (1);
}

/**
* main - entry point
* @argc: param count
* @argv: array of args
* Return: 1 if Error, otherwise 0
*/
int main(int argc, char **argv)
{
	int i = 1;
	int acc = 0;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	else
	{
		if (has_only_numbers(argv + 1))
		{
			while (argv[i] != 0)
			{
				acc += atoi(argv[i]);
				i++;
			}
			printf("%d\n", acc);
			return (0);
		}
		else
		{
			puts("Error");
			return (1);
		}
	}
}
