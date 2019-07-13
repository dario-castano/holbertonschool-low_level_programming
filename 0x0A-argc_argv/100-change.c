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
 * change -  prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @money: The money
 * Return: Number of coins regardless their type
 */
int change(int money)
{
	int coins = 0;
	int plata = money;

	while (plata > 0)
	{
		if (plata / 25 >= 1)
		{
			coins += plata / 25;
			plata %= 25;
		}
		else if (plata / 10 >= 1)
		{
			coins += plata / 10;
			plata %= 10;
		}
		else if (plata / 5 >= 1)
		{
			coins += plata / 5;
			plata %= 5;
		}
		else if (plata / 2 >= 1)
		{
			coins += plata / 2;
			plata %= 2;
		}
		else
		{
			coins++;
			plata--;
		}
	}

	return (coins);
}

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of params
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (isa_positive_number(argv[1]))
		{
			printf("%d\n", change(atoi(argv[1])));
			return (0);
		}
		else if (isa_negative_number(argv[1]))
		{
			puts("0");
			return (0);
		}
		else
		{
			puts("Error");
			return (1);
		}
	}
	else
	{
		puts("Error");
		return (1);
	}
}
