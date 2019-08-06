#include "lists.h"
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node, *actual_node, *previous_node;
	unsigned int count = 0;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		actual_node = *head;
		next_node = actual_node->next;

		if (next_node == NULL)
		{
			free(actual_node);
			*head = NULL;
			return (1);
		}

		*head = next_node;
		free(actual_node);
		return (1);
	}
	while (head)
	{
		count++;
		previous_node = *head;
		actual_node = previous_node->next;
		next_node = actual_node->next;

		if (index == count)
		{
			previous_node->next = next_node;
			free(actual_node);
			return (1);
		}
		*head = actual_node;
	}
	return (-1);
}
