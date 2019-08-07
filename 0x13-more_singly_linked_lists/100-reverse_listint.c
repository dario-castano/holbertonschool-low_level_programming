#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a linked list
 * @head: the head
 * Return: head of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *base;
	listint_t *ptr;

	base = *head;

	if (base == NULL)
		return (NULL);

	while (base->next != NULL)
	{
		ptr = base->next;
		base->next = ptr->next;
		ptr->next = *head;
		*head = ptr;
	}

	return (*head);
}
