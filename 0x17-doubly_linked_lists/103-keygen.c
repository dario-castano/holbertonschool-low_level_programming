/*
 ============================================================================
 Name        : 103-keygen.c
 Author      : dario
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main(int argc, char **argv)
{
	(void) argc;
	int k = 0;
	char key[7];
	char *user = argv[1];
	char menu[] = "A-CHRdw871NS0E9B2TibgpnM"
			"Vys5XzvtOgJcYLU+4mjW6fxq"
			"ZeF3Qa1rPhdKIouk";

	char *nameptr = user;
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

	printf("%s",key);
	return (0);
}
