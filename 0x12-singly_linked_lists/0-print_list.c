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

	while (h != NULL)
	{
		printf("[%d] %s\n",
		 h->str ?
		 h->len : 0,
		 h->str ?
		 h->str : "(nil)");
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
