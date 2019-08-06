#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the linkedlist
 * @index: the node what you want to return
 * Return: pointer to a node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *pointer = head;

	if (!head)
		return (NULL);

	while (head)
	{
		if (count == index)
			return (pointer);

		pointer = head->next;
		head = pointer;
		count++;
	}

	return (NULL);
}
