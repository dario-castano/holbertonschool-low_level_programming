#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list.
 * @head: head of likedlist
 * @index: index to be deleted
 * Return: 1 success, -1 failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node, *actual_node, *previous_node;
	listint_t *pointer = *head;
	unsigned int count = 0;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		actual_node = *head;
		next_node = actual_node->next;

		*head = next_node;

		free(actual_node);
		return (1);
	}
	while (*head)
	{
		count++;
		previous_node = *head;
		actual_node = previous_node->next;

		if (actual_node == NULL)
			return (-1);

		next_node = actual_node->next;

		if (index == count)
		{
			previous_node->next = next_node;
			free(actual_node);
			*head = pointer;
			return (1);
		}
		*head = actual_node;
	}
	return (-1);
}
