#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

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
			printf("[%d] (nil)\n", pointer->len);
		else
			printf("[%d] %s\n", pointer->len, pointer->str);

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
