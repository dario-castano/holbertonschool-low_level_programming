#include "lists.h"

/**
 * dlistint_len - returns the number of
 * elements in a linked dlistint_t list.
 * @h: head of the node
 * Return: the address of the new element,
 * or NULL if it failed
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list
 * @head: head of list
 * @index: index to be deleted
 * Return: 1 success, -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *left, *right;
	size_t list_len = dlistint_len(*head);
	unsigned int i = 0;

	if (head == NULL || *head == NULL || index + 1 > list_len)
		return (-1);
	node = *head;
	left = node->prev;
	right = node->next;

	if (index == 0)
	{
		*head = right;
		if (node->next != NULL)
			right->prev = NULL;
		free(node);
		return (1);
	}
	while (node != NULL)
	{
		if (i == index)
		{
			if (right == NULL)
				left->next = NULL;
			else
			{
				left->next = right;
				right->prev = left;
			}
			free(node);
			return (1);
		}
		node = node->next;
		left = node->prev;
		right = node->next;
		i++;
	}
	return (-1);
}
