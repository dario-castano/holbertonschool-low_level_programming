#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the linkedlist
 * @idx: index to add the node
 * @n: value to store inside the node
 * Return: address of new node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new_node, *prev_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	ptr = *h;
	prev_node = NULL;
	while (ptr != NULL)
	{
		if (i == idx)
		{
			if (idx == 0)
			{
				free(new_node);
				return (add_dnodeint(h, n));
			}
			if (ptr->next == NULL)
			{
				free(new_node);
				return (add_dnodeint_end(h, n));
			}
			prev_node->next = new_node;
			new_node->prev = prev_node;
			new_node->next = ptr;
			ptr->prev = new_node;
			return (new_node);
		}
		prev_node = ptr;
		ptr = ptr->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
