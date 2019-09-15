#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list
 * @head: head of list
 * @index: index to be deleted
 * Return: 1 success, -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *prev_node, *next_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	prev_node = node->prev;
	next_node = node->next;

	if (index == 0)
	{
		if (next_node == NULL)
			*head = NULL;
		else
		{
			*head = next_node;
			next_node->prev = NULL;
		}
		free(node);
		return (1);
	}

	while (node != NULL)
	{
		if (i == index)
		{
			prev_node->next = next_node;
			next_node->prev = prev_node;
			free(node);
			return (1);
		}
		node = node->next;
		prev_node = node->prev;
		next_node = node->next;
		i++;
	}
	return (-1);
}
