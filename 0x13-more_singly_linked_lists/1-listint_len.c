#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - count all the elements of a list_t list.
 * @h: Head of a linkedlist
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int num_nodes;
	const listint_t *pointer;

	if (h == NULL)
	{
		num_nodes = 0;
		return (num_nodes);
	}

	num_nodes = 0;
	pointer = h;

	while (pointer != NULL)
	{
		num_nodes++;

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
