#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of linkedlist
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	dlistint_t *next_node;

	if (head == NULL)
		return;

	ptr = head;
	next_node = ptr->next;

	while (next_node != NULL)
	{
		free(ptr);
		ptr = next_node;
		next_node = next_node->next;
	}

	free(ptr);
}
