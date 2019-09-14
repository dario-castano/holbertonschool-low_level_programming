#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of
 * a dlistint_t linked list
 * @head: head of the double linkedlist
 * @index: index to find
 * Return: address of the node if success
 * otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 0;

	if (head == NULL)
	return (NULL);

	ptr = head;

	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);

		ptr = ptr->next;
		count++;
	}

	return (NULL);
}
