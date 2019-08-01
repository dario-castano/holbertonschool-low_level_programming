#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - get the length of a string
 * @s: pointer to a char
 * Return: number of chars
 */
int _strlen(char *s)
{
	int acc = 0;

	if (s == NULL)
		return (0);

	while (s[acc] != '\0')
	{
		acc++;
	}

	return (acc);
}

/**
 * print_list - prints all the elements of a list_t list.
 * @h: Head of a linkedlist
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int num_nodes;
	const list_t *pointer;

	if (h == NULL)
	{
		printf("[%d] (nil)\n", 0);
		num_nodes = 0;
		return (num_nodes);
	}

	num_nodes = 0;
	pointer = h;

	while (pointer != NULL)
	{
		num_nodes++;

		if (pointer->str == NULL)
			printf("[%d] (nil)\n", _strlen(pointer->str));
		else
			printf("[%d] %s\n", _strlen(pointer->str), pointer->str);

		if (pointer->next == NULL)
		{
			return (num_nodes);
		}
		else
		{
			pointer = pointer->next;
		}
	}

	return (num_nodes);
}
