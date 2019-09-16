#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_chars_name - sum of the
 * char values of the name
 * @name: name to use
 * Return: the sum of squares
 */
int sum_chars_name(char *name)
{
	int acc = 0;

	while (*name != '\0')
	{
		acc += *name;
		name++;
	}
	return (acc);
}

/**
 * prod_chars_name - product of the
 * char values of the name
 * @name: name to use
 * Return: the sum of squares
 */
int prod_chars_name(char *name)
{
	int acc = 1;

	while (*name != '\0')
	{
		acc *= *name;
		name++;
	}
	return (acc);
}

/**
 * sum_sq_chars_name - sum the product of
 * the squares of the name
 * @name: name to use
 * Return: the sum of squares
 */
int sum_sq_chars_name(char *name)
{
	int acc = 0;

	while (*name != '\0')
	{
		acc += (*name * *name);
		name++;
	}
	return (acc);
}

/**
 * reverse_rand - throws random nums
 * using the name length
 * @name: name to use
 * Return: a random number
 */
int reverse_rand(char *name)
{
	int i = 0, k = 0;
	int j = *name;

	while (i < j)
	{
		k = rand();
		i++;
	}
	return (k);
}

/**
 * main - Entry point
 * @argc: argcount
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	int k = 0;
	char key[7];
	char *user = argv[1];
	char str1[] = "A-CHRDw87lNS0E9B2TibgpnM";
	char str2[] = "Vys5XzvtOGJcYLU+4mjW6fxq";
	char str3[] = "ZeF3Qa1rPhdKIouk";
	char *nameptr = user;

	char *menu = calloc(65, sizeof(char));
	if (menu == NULL)
		return (-1);

	strcat(menu, str1);
	strcat(menu, str2);
	strcat(menu, str3);

	while (*nameptr != '\0')
	{
		if (*nameptr > k)
			k = *nameptr;
		nameptr++;
	}
	srand(k ^ 0xe);

	key[0] = menu[(strlen(user) ^ 0x3b) & 0x3f];
	key[1] = menu[(sum_chars_name(user) ^ 0x4f) & 0x3f];
	key[2] = menu[(prod_chars_name(user) ^ 0x55) & 0x3f];
	key[3] = menu[rand() & 0x3f];
	key[4] = menu[(sum_sq_chars_name(user) ^ 0xef) & 0x3f];
	key[5] = menu[(reverse_rand(user) ^ 0xe5) & 0x3f];
	key[6] = '\0';

	printf("%s\n", key);
	free(menu);
	return (0);
}
