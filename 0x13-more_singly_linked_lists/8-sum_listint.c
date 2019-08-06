#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: head of the node
 *
 * Return: The sum of all nodes
 */
int sum_listint(listint_t *head)
{
	int acc = 0;

	if (!head)
		return (0);

	while (head)
	{
		acc += head->n;
		head = head->next;
	}

	return (acc);
}
