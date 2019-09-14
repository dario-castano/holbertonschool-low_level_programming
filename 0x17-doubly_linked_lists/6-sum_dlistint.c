#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * (n) of a dlistint_t linked list
 * @head: head of the linkedlist
 * Return: Sum of the values (n)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int answer = 0;

	if (head == NULL)
		return (0);

	ptr = head;

	while (ptr != NULL)
	{
		answer += ptr->n;
		ptr = ptr->next;
	}

	return (answer);
}
